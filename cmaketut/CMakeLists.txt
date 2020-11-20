cmake_minimum_required(VERSION 3.10)

# set the project name with version
project(pro)

#build a excutable
add_excutable(${PROJECT_NAME} main.c add.c)
