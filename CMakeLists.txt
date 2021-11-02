cmake_minimum_required(VERSION 3.0.0)
project(helloworld-cmake VERSION 0.1.0)

set(Boost_USE_STATIC_LIBS       ON)
set(Boost_USE_MULTITHREADED     ON)
set(Boost_USE_STATIC_RUNTIME    ON)
set(Boost_DEBUG                 ON)
if (MSVC)
        set(Boost_ARCHITECTURE          "-x64") 
        set(Boost_COMPILER              "-vc142") 
        set(BOOST_ROOT "C:/boost")      # required to find_package()
        set(Boost_INCLUDE_DIRS "C:/boost/include/boost-1_77")
        set(Boost_LIBRARY_DIRS "C:/boost/lib")
        set(CMAKE_LIBRARY_ARCHITECTURE "${CMAKE_VS_PLATFORM_NAME}")
endif (MSVC)
message("## Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")  # デバッグ用：解決したパスを表示
message("## Boost_LIBRARY_DIRS: ${Boost_LIBRARY_DIRS}")  # デバッグ用：解決したパスを表示
message("## CMAKE_LIBRARY_ARCHITECTURE: ${CMAKE_LIBRARY_ARCHITECTURE}")  # デバッグ用：解決したパスを表示
message("## PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")

include_directories( 
    "${PROJECT_SOURCE_DIR}"
    "${Boost_INCLUDE_DIRS}"
)
#find_package(Boost COMPONENTS system filesystem REQUIRED)
find_package(Boost 1.77.0 REQUIRED
             COMPONENTS system filesystem)

# Create a static library called 'libMyLib.a'(win: MyLib.lib) from compiling MyClass1.cpp, MyClass2.cpp and MyClass3.cpp.
#add_library(MyLib STATIC src/MyClass1.cpp src/MyClass2.cpp src/MyClass3.cpp)
add_library(MyLib STATIC src/MyClass.cpp)

include(CTest)
enable_testing()

include_directories(
        ${Boost_INCLUDE_DIRS}
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
)
file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
)
# Create an executable file called 'helloworld-cmake' from main.cpp.
add_executable(helloworld-cmake src/main.cpp)
#add_executable(helloworld-cmake ${all_SRCS})
#add_subdirectory(lib)
#add_subdirectory(src)

# Link 'libMyLib.a'(win: MyLib.lib) and Boost Library, when creating helloworld-cmake.
target_link_libraries(helloworld-cmake
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        MyLib
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
