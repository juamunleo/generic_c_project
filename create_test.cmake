MESSAGE(STATUS "Building unit tests")
enable_testing()

add_subdirectory(lib/unity)

add_executable(${PROJECT_NAME}
    # Program sources
    "src/file.c"

    # Test sources
    "test/unit/src/file_test.c"
    "test/unit/src/main.c"
)

target_include_directories(${PROJECT_NAME} PRIVATE
    # Program includes are already in CMakeLists.txt

    # Test includes
    "test/unit/include"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    unity
)