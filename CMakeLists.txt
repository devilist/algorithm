cmake_minimum_required(VERSION 3.10)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

#aux_source_directory(${PROJECT_SOURCE_DIR}/algorithm SRC)
#aux_source_directory(${PROJECT_SOURCE_DIR}/algorithm/001_twosum SRC)

set(SRC algorithm/algorithm.cpp
        algorithm/001/001.cpp
        algorithm/002/002.cpp
        algorithm/003/003.cpp)


include_directories(${PROJECT_SOURCE_DIR}/algorithm)
add_executable(algorithm main.cpp ${SRC})