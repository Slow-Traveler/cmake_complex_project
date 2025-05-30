cmake_minimum_required(VERSION 3.10)
project(StudyCmake)
set(CXX_STANDARD_REQUIRED 11)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(PeopleName_DIR ${CMAKE_SOURCE_DIR}/src/peopleName)
set(SayHello_DIR ${CMAKE_SOURCE_DIR}/src/sayHello)

add_subdirectory(src)