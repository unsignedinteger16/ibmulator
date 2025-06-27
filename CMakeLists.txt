project(ibmulator)
cmake_minimum_required(VERSION 3.25.1)

set(C_STANDARD 17)
set(C_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCES src/**.c include/**.h)
add_executable(ibmulator ${SOURCES})
target_include_directories(ibmulator PUBLIC inc/)