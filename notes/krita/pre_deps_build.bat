cd b
cmake ..\krita\build-tools\ci-deps -G "MinGW Makefiles" -DCMAKE_INSTALL_PREFIX=..\i
cmake --build .
cd ..