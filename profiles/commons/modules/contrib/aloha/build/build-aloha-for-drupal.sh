#!/bin/sh

# Run this from the location where this file lives.
#
# Requirements:
# - internet access
# - git
# - nodejs
# - uglifyjs

BUILDPROFILE=build/aloha/build-profile-drupal.js
TARGETDIR=target/build-profile-drupal
TAG=master #alohaeditor-0.22.1
PATCHEXCLUDE="--exclude=build/* --exclude=doc/*"




echo "[1/6] Cloning Aloha Editor"

git clone git://github.com/alohaeditor/Aloha-Editor.git --depth 1 --branch $TAG
cd Aloha-Editor
git checkout f9b2a7679abc913e4ccf16ce4bccacd8c998b592
cd ..
# mkdir Aloha-Editor
# cd Aloha-Editor
# git init
# git remote add origin git://github.com/alohaeditor/Aloha-Editor.git
# git fetch origin 27110c00ba
# git reset --hard FETCH_HEAD
# cd ..




echo "[2/6] Applying patches"

cd Aloha-Editor
# No patches at the moment.



echo "[3/6] Building"

cp ../build-profile-drupal.js build/aloha/
node build/r.js -o $BUILDPROFILE




echo "[4/6] Cleaning up build of Aloha Editor"

# General clean-up.
rm -rf $TARGETDIR/build.txt
rm -rf $TARGETDIR/*.patch
rm -rf $TARGETDIR/demo
rm -rf $TARGETDIR/img
rm -rf $TARGETDIR/lib/aloha/nls
rm -rf $TARGETDIR/lib/vendor/grid.locale.*
find $TARGETDIR -name "README*" -type f -exec rm {} +
# Remove bundled jQuery versions.
rm -rf $TARGETDIR/lib/vendor/3rdparty.txt
rm -rf $TARGETDIR/lib/vendor/jquery-1.*
rm -rf $TARGETDIR/lib/vendor/jquery.*
rm -rf $TARGETDIR/lib/vendor/repository-browser
rm -rf $TARGETDIR/test

# Remove "common" plug-ins we don't use and remove cruft from the remaining ones.
rm -rf $TARGETDIR/plugins/common/abbr
rm -rf $TARGETDIR/plugins/common/characterpicker
rm -rf $TARGETDIR/plugins/common/horizontalruler
rm -rf $TARGETDIR/plugins/common/image/demo
# rm -rf $TARGETDIR/plugins/common/image/img
rm -rf $TARGETDIR/plugins/common/image/test
rm -rf $TARGETDIR/plugins/common/image/vendor/ui
rm -rf $TARGETDIR/plugins/common/link/demo
rm -rf $TARGETDIR/plugins/common/link/extra
rm -rf $TARGETDIR/plugins/common/table
rm -rf $TARGETDIR/plugins/common/undo

# Remove all "extra" plug-ins except for captioned-image.
mv $TARGETDIR/plugins/extra/captioned-image $TARGETDIR/plugins/
rm -rf $TARGETDIR/plugins/extra/*
mv $TARGETDIR/plugins/captioned-image $TARGETDIR/plugins/extra/

# Remove the aggregated CSS (Drupal will do this for us).
rm -rf $TARGETDIR/css

# Remove the default UI's CSS + images.
rm -rf $TARGETDIR/plugins/common/ui/css
rm -rf $TARGETDIR/plugins/common/ui/img

# Remove important things we don't need.
rm -rf $TARGETDIR/aloha-jquery-noconflict.js
rm -rf $TARGETDIR/text.js




echo "[5/6] Minifying"

uglifyjs -o $TARGETDIR/css.js $TARGETDIR/css.js
uglifyjs -o $TARGETDIR/aloha/ierange-m2.js $TARGETDIR/aloha/ierange-m2.js
uglifyjs -o $TARGETDIR/lib/aloha.js $TARGETDIR/lib/aloha.js
uglifyjs -o $TARGETDIR/lib/vendor/class.js $TARGETDIR/lib/vendor/class.js
uglifyjs -o $TARGETDIR/lib/vendor/sanitize.js $TARGETDIR/lib/vendor/sanitize.js




echo "[6/6] Build clean-up"

cd ..
rm -rf alohaeditor
mv Aloha-Editor/$TARGETDIR alohaeditor
rm -rf Aloha-Editor
