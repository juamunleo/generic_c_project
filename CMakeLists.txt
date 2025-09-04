cmake_minimum_required(VERSION 4.1)
project(ProjectName)

enable_language(C)

if(CMAKE_BUILD_TYPE STREQUAL "UnitTest")
    include("create_test.cmake")
else()
    include("create_lib.cmake")
endif()

target_include_directories(${PROJECT_NAME} PRIVATE
    "include"
)