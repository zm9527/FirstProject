使用Cmake+make来编译：
1. cmake -G "MinGW Makefiles" -D "CMAKE_MAKE_PROGRAM:PATH=D:\\software_install_new\\MinGW\\bin\\make.exe" .
2. make

使用Cmake+visual studio来编译：
1. cmake .
2. make


PS：在windows下使用CMake编译C++源码产生的是Visual Studio工程文件，而不是Makefiles。