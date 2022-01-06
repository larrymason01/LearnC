cmake_minimum_required(VERSION 3.21)
project(LearnCv2 C)

set(CMAKE_C_STANDARD 99)
set(SOURCE_FILES Arrays Challenges ControlFlow Functions Operators Pointers Strings Structs)

#Change the c file to which file you wish to run
add_executable(LearnCv2 Structs/StructsAndPointers.c)


