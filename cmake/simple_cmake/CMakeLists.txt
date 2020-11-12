# BUILD_INFO
message("===========BUILD_SYSTEM-INFO=============")

cmake_host_system_information(RESULT _os_name QUERY OS_NAME)
message("-- OPERATING_SYSTEM             : " ${_os_name})

cmake_host_system_information(RESULT _host_name QUERY HOSTNAME)
message("-- HOST_NAME                     : " ${_host_name})
# cores info
cmake_host_system_information(RESULT _logical_cores QUERY NUMBER_OF_LOGICAL_CORES)
message("-- LOGICAL_CORES                 : " ${_logical_cores})

cmake_host_system_information(RESULT _physical_cores QUERY NUMBER_OF_PHYSICAL_CORES)
message("-- PHYSICAL_CORES                : " ${_physical_cores})

cmake_host_system_information(RESULT _os_arch QUERY IS_64BIT)
message("-- OPERATING_SYSTEM_ARCHITECTURE : " ${_os_arch})


# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)
message("========================================")

# Project's name
project(simple)

# Set the output folder where your program will be created

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included

include_directories("${PROJECT_SOURCE_DIR}")

add_executable(simple ${PROJECT_SOURCE_DIR}/simple.c)


