# Steps for building Krita in win10

https://docs.krita.org/en/untranslatable_pages/building_krita.html#building-on-windows


https://krita-artists.org/t/trouble-building-krita-on-windows/23344/4

## Requirements:
- Git 
  - https://git-scm.com/downloads
- CMake > 3.10
  - https://cmake.org/download/
  - add PATH: C:\Program Files\CMake\bin
- compiler: mingw-w64 7.3 by krita mingw-builds
  - x86_64-7.3.0-release-posix-seh-rt_v5-rev0.7z
  - seh (64bit)
  - posix for threading
  - https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.3.0/threads-posix/seh/
  - unzip to C:/mingw-w64
    - extract whole folder to C:/mingw-w64
    - dir: C:/mingw-w64/<x86....>/mingw64./...
    - Add PATH:C:\mingw-w64\x86_64-7.3.0-release-posix-seh-rt_v5-rev0\mingw64\bin
- Python 3.8
- Window 10 SDK
  - https://developer.microsoft.com/en-us/windows/downloads/windows-10-sdk/
- QT Creator (5.0.1 seems work)
  - https://download.qt.io/official_releases/qtcreator/



## Steps:
### Install Required tools

### prepare dir
/ krita_dev
  / dev
    / krita (git source), 
  / d (deps)
  / i (install)
  / b (binary)

### create dev/env.bat
- edit version numbers and path

```
set DLLTOOL_EXE=C:\mingw-w64\x86_64-7.3.0-posix-seh-rt_v5-rev0\mingw64\bin\dlltool.exe
set MINGW_GCC_BIN=C:\mingw-w64\x86_64-7.3.0-posix-seh-rt_v5-rev0\mingw64\\bin
set MINGW_BIN_DIR=C:\mingw-w64\x86_64-7.3.0-posix-seh-rt_v5-rev0\mingw64\\bin
set BUILDROOT=c:\dev
set BUILDDIR_INSTALL=%BUILDROOT%\i
set PATH=%BUILDROOT%\i\bin;%BUILDROOT%\i\lib;%MINGW_GCC_BIN%;C:\Program Files\CMake\bin;c:\qt\qtcreator-4.12.0\bin;%PATH%
set "WindowsSdkDir=%ProgramFiles(x86)%\Windows Kits\10"
set "WindowsSdkVerBinPath=%ProgramFiles(x86)%\Windows Kits\10\bin\10.0.17763.0"
```

 Since Krita 5.1 when using SIP5+ you also need to set up PYTHONPATH manually
set PYTHONPATH=%BUILDROOT%\i\lib\site-packages;%PYTHONPATH%

---

## Set Env
### run dev/env.bat
- everytime when build

## Cloe Source
### clone krita git source
- https://invent.kde.org/graphics/krita
- to /dev/krita


## Prepare dependencies
- using prebuilt dependencies <== use this one seems ok
  - compiler version need match...
  - create /b
  - cd to /b
  - `cmake ..\krita\build-tools\ci-deps -G "MinGW Makefiles" -DCMAKE_INSTALL_PREFIX=..\i`
  - cmake --build .

- Building dependencies from scratch 
  - take hours to build
  - make sure path is correct
  - cd krita_dev\
  - `krita_dev\krita\build-tools\windows\build.cmd --no-interactive --jobs 8 --skip-krita --src-dir <C:\krita> --download-dir <C:\d> --deps-build-dir <C:\b> --deps-install-dir <C:\i>`
  - zip and backup /i

## Build krita
  - make sure path is correct
  - `krita\build-tools\windows\build.cmd --no-interactive --jobs 8 --skip-deps --src-dir c:\dev\krita --download-dir c:\dev\d --deps-build-dir c:\dev\b --deps-install-dir c:\dev\is --krita-build-dir c:\dev\b_krita --krita-install-dir c:\dev\i`


## Quick build
```
$ cd c:\dev\b_krita
$ mingw32-make install
```

## Run krita
- env.bat
- /i/bin/krita.exe


