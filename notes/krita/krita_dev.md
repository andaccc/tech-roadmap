# Intro to krita dev 

https://docs.krita.org/en/untranslatable_pages/intro_hacking_krita.html#introduction-to-hacking-krita

## Required Knowledge
- QT
- C++

## Community
- join IRC
  - https://web.libera.chat/
  - #krita 
  - ##krita-chat
- GitLab for bugtracking
- subscribe mailing list
- https://krita-artists.org/c/develop/7
- https://forum.kde.org/viewforum.php?f=136

## IDE

- vs code seems ok
- QT creator 

https://darabba.blogspot.com/2019/05/kritaqt-creator.html
https://www.youtube.com/watch?v=jxIhFlGbPbs&ab_channel=DmitryKazakov

---
# Set up Krita project for QT Creator 

## Open Project
- open project with krita/CMakeLists.txt

## Set Kits
- !!! Don't change kits, use default "Imported Kit - temporary"
   - if change kit then need to rebuild krita
- use release with debug info
- manage -> cmake -> uncheck "Autorun Cmake"
- Debugger -> make sure GDB is here
- Compiler -> MinGW g++
- QT version -> i/bin/qmake.exe
- Kits 
	- change to proper name: "Qt 5.12.11 (i)"
	- Check compiles
	- debuggers
	- QT version
	- CMake Configuration: remove all 
- Configure Project

## Set Build
- Build Environment 
  - Details
  - Path -> Bath edit
    - in cmd -> set
    - paste path 

- Build directory: b_krita
- Build -> Build Krita
	- cmake setting
	- https://docs.krita.org/en/untranslatable_pages/cmake_settings_for_developers.html#cmake-build-type


## Set Run
- Run Setting > Run
- add Custom Executable
 - i/krita.exe

- (Deployment)
	- Add Deploy Step -> cmake

## Debug
- add breakpoint
- pause application

---
## Git
https://invent.kde.org/graphics/krita

Fork