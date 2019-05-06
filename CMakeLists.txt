cmake_minimum_required(VERSION 3.10)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

aux_source_directory(${PROJECT_SOURCE_DIR}/algorithm SRC)
#aux_source_directory(${PROJECT_SOURCE_DIR}/algorithm/001_twosum SRC)

include_directories(${PROJECT_SOURCE_DIR}/algorithm)

add_executable(algorithm main.cpp ${SRC})