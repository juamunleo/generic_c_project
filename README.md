# Generic C project template
This is a template to quickly create a C project, using CMake.

*.vscode/tasks.json* contains the CMake commands to compile the code as library / unit test.

This template contains a simple *file.c* and *file.h*, and an unimplemented unit test. From here, just change the project name and implement your code.

## What to modify
- *src* and *include* folders with your code (also *test/unit* *src* and *include* folders)
- In *CMakeLists.txt*, `project(ProjectName)`, replace `ProjectName` with the name of your project
- In *test/unit/src/main.c* and *test/unit/src/file_test.c*, replace `ModuleName` with the name of the module you want to test.