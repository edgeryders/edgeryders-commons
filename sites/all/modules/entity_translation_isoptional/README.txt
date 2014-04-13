Entity Translation Is Optional
==============================

A tiny module to adapt the option naming and field descriptions provided by the entity_translation module 
in order to make it clear that setting content to a specific language is optional and should only be done 
if one wants the content to be translated to other languages.

This makes sense because only when setting content to a specific language, it becomes translateable via 
entity_translation (by having a "Translate" tab added). This usage hack makes it possible to do basic 
translation management with entity_translation (after adding some custom views). No specific translation 
management module is needed any more – which solves a problem because tmgmt and lingotek are so complex that 
they are overkill for simple requirements and translation_overview only works with node translation (not 
entity / field translation).

