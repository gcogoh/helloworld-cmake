cmake_minimum_required(VERSION 3.0.0)
project(helloworld-cmake VERSION 0.1.0)

set(Boost_INCLUDE_DIRS "C:/msys64/mingw64/include")

include_directories( 
    "${PROJECT_SOURCE_DIR}"
    "${Boost_INCLUDE_DIRS}"
)
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
add_executable(helloworld-cmake ${all_SRCS})
#add_subdirectory(src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
