cmake_minimum_required(VERSION 3.30)
project(unity)

add_library(
    ${PROJECT_NAME}
    "src/unity.c"
    "src/unity_fixture.c"
    "src/unity_memory.c"
)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    include
)