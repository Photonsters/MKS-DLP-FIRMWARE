# Official Photonsters version of MKS mSLA open source firmware #


## Notes:
- There is a ~23MB library - *mksDLP.a* - for which currently there is no source.  After cursory examination with nm, it seems to mainly contain routines that the GUI relies upon for rendering, callbacks, etc.
- Nonetheless it seems the GUI graphics can be customized with the [MKS-Tool software](https://github.com/makerbase-mks/MKS-TOOL)
- This project currently requires expensive commercial software - IAR Workbench for ARM - to build.  We hope we can remedy this situation.  In the meantime, [grab a demo version (30 day trial)](https://www.iar.com/iar-embedded-workbench/) to compile this firmware.  Or something.  Again, it's the ARM version you need to somehow procure.  I successfully used version 8.4.  The MKS people seem to use 7.10 per a communication we had.

## Build Instructions and a few novice usage tips about IAR Workbench:

1. Install a copy of [IAR Workbench](https://www.iar.com/iar-embedded-workbench/) for ARM `<cringe>`.

2. Clone this github project to your local machine.

3. Open the project in IAR Workbench using "Add Existing Project"

  ![ExistingProject](/GitHubPics/AddProject.jpg)

4. The project file has the extension .ewp.  It's in the EWARM subdirectory.

  ![mksDLP-ewp](/GitHubPics/mksDLP-ewp.jpg)

5. I found the Workspace to be a little bit unconventional.  It seems that the file listing is a visual representation of the dependency tree.  To find the includes, you have to open the twisty under each .c or .cpp file, and what I believe to be only the relevant ones to that source file are linked under there.  Double-clicking on any of these file names will open the file(s) as tab(s) in the editing window.  Which, by the way, might be buried under existing windows, depending on how you've configured your workbench.  So float or autohide sub-windows and move them around to your liking.

  ![Includes](/GitHubPics/Includes.jpg)

6. Before you build the project, you might want to configure the build message window (View->Messages->Build) to only show you errors. As of this writing there are many thousands of warnings and the things you really need to see will get buried in there.  Right click in the build message window and select "Errors" under "Filter Level" 

 ![Errors](/GitHubPics/BuildErrorsOnly.jpg)

7. Click the *Make* button to initiate a build.  If it's the first time you've done so, you'll be asked where to save your now-modified project.  The default appears to be Project.ewp in the EWARM folder.

 ![MakeButton](/GitHubPics/Make.jpg)
 ![SaveProject](/GitHubPics/ProjectSave.jpg)

8. If the build encounters errors, it will show them to you in the build message window.  If you double-click on an error it will take you to the relvant line of code in the relevant file.

 ![ErrorFix](/GitHubPics/BuildErrorFix.jpg)

9. When the project successfully builds, the resulting binary firmware *mksDLP.bin* will be written into the EWARM/mksDLP/Exe folder.

 ![OutputBin](/GitHubPics/OutputBin.jpg)
 
10. Upload the mksDLP.bin file to your board (Need directions for that here).
