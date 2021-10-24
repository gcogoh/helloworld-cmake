# helloworld-cmake
## VSCode template for CMake in minimum.
VSCode usage of cmake build environment.<br/>
The heart of the topic is <br/>
File: `.vscode/settings.json` define...<br/>
<pre>{
    "cmake.cmakePath": "C:/msys64/mingw64/bin/cmake"
}</pre>
in response to the extension 'CMake',<br/>
before invoking 'CMake: Quick Start' in command palette of View menu.

## Environment:
+ cmake:
	- MSYS2/MINGW64: mingw64/mingw-w64-x86_64-cmake 3.21.3-1 
+ C++ Compiler:
	- Microsoft Visual Studio Build Tools 2019
+ VScode Extension:
	- CMake(CMake langage support for Visual Studio Code)<br>
	included in 'C/C++ Extension Pack'

## All projects build.
![すべてのプロジェクトの構成](/docs/img/cmake-02.png)
