cmake_minimum_required(VERSION 3.0.0)
project(xml_parser VERSION 0.1.0)

include(CTest)
enable_testing()

set(XML_PARSER_HOME ${CMAKE_SOURCE_DIR})
set(SRC_DIR         ${CMAKE_SOURCE_DIR}/src)        

file(GLOB SRC_FILES      ${CMAKE_SOURCE_DIR}/src/*.cpp)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(xml_parser ${SRC_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
