cmake_minimum_required(VERSION 3.10)

# set the project name with version
project(pro )



#build a excutable
add_executable(${PROJECT_NAME} main.c)

#adding subdir static library_build
add_subdirectory(lib)
 #target linking
 target_link_libraries(${PROJECT_NAME} fadd)
