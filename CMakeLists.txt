cmake_minimum_required(VERSION 3.0.0)
project(helloworld-cmake VERSION 0.1.0)

set(Boost_USE_STATIC_LIBS       ON)
set(Boost_USE_MULTITHREADED     ON)
set(Boost_USE_STATIC_RUNTIME    ON)
if (MSVC) 
        set(Boost_INCLUDE_DIRS "C:/boost/include/boost-1_77")
        set(Boost_LIBRARY_DIRS "C:/boost/lib")
        set(CMAKE_LIBRARY_ARCHITECTURE "${CMAKE_VS_PLATFORM_NAME}")
endif (MSVC)
#find_package(Boost 1.77.0 REQUIRED
#             COMPONENTS date_time system)
message("## Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")  # デバッグ用：解決したパスを表示
message("## Boost_LIBRARY_DIRS: ${Boost_LIBRARY_DIRS}")  # デバッグ用：解決したパスを表示

include_directories( 
    "${PROJECT_SOURCE_DIR}"
    "${Boost_INCLUDE_DIRS}"
)
#find_package(Boost COMPONENTS system filesystem REQUIRED)
#find_package(Boost COMPONENTS system REQUIRED)
#target_link_libraries( 
#        ${Boost_RANGE_LIBRARY}
#       ${Boost_FILESYSTEM_LIBRARY}
#       ${Boost_SYSTEM_LIBRARY}
#)
#target_link_libraries(
#        ${Boost_SYSTEM_LIBRARY}
#        Boost::date_time Boost::system
#)

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
