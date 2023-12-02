cmake_minimum_required(VERSION 3.10)
project(MyAlmondGame VERSION 0.1.0)

# Retrieve the value of the environment variable MyAlmondEngine_Dir
if (DEFINED ENV{MyAlmondEngine_Dir})
    set(ENGINE_DIR $ENV{MyAlmondEngine_Dir})
    message(STATUS "MyAlmondEngine_Dir is set to: ${MyAlmondEngine_Dir_VALUE}")
else()
    message(WARNING "MyAlmondEngine_Dir is not set.")
endif()

if(NOT DEFINED GAME_DIR)
    set(GAME_DIR ${CMAKE_CURRENT_SOURCE_DIR})
endif()

set(EXECUTABLE_OUTPUT_PATH ${GAME_DIR}/GameBuild)

include_directories(${GAME_DIR}/src)

file(GLOB_RECURSE GAME_SOURCES ${GAME_DIR}/src/*.cpp)

include(${ENGINE_DIR}/CMakeLists.txt)

message(${ENGINE_DIR})






