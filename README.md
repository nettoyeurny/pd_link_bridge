# pd_link_bridge
Ableton Link integration for Pd.

## Getting started

* Set up a libpd-based Xcode project as usual.
* Add the Link library and headers to your project setup as described here: http://ableton.github.io/linkkit/#getting-started
* Add `pd_link_bridge/**` to your header search path.
* Add `pd_link_bridge/ios/PdLinkAudioUnit.{h,m}` to the sources of your project.
* Add the Link preference pane to your user interface (e.g., by cargo-culting the relevant bits of the LinkHut sample project).
* Create a Link instance, a PdLinkAudioUnit instance, and a PdAudioController instance:

```
ABLLinkRef linkRef = ABLLinkNew(120, 4);
PdLinkAudioUnit pdAudioUnit = [[PdLinkAudioUnit alloc] initWithLinkRef:linkRef];
PdAudioContoller pd = [[PdAudioController alloc] initWithAudioUnit:pdAudioUnit];
```

* Create a Pd patch using the Link external, `abl_link~`. In order to create patches on a desktop computer (where the actual link external is not (yet) available), you can use the mockups in `pd_link_bridge/abstractions`.
* Make sure to check out the help patch of `abl_link~`.
* 
