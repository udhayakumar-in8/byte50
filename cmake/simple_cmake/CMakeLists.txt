# BUILD_INFO
message("===========BUILD_SYSTEM-INFO=============")

cmake_host_system_information(RESULT _os_name QUERY OS_NAME)
message("-- OPERATING_SYSTEM              : " ${_os_name})

cmake_host_system_information(RESULT _host_name QUERY HOSTNAME)
message("-- HOST_NAME                     : " ${_host_name})
# cores info
cmake_host_system_information(RESULT _logical_cores QUERY NUMBER_OF_LOGICAL_CORES)
message("-- LOGICAL_CORES                 : " ${_logical_cores})

cmake_host_system_information(RESULT _physical_cores QUERY NUMBER_OF_PHYSICAL_CORES)
message("-- PHYSICAL_CORES                : " ${_physical_cores})

cmake_host_system_information(RESULT _os_arch QUERY IS_64BIT)
if (${_os_arch})
    message("-- OPERATING_SYSTEM_ARCHITECTURE :64 bit")
else()
message("-- OPERATING_SYSTEM_ARCHITECTURE :32 bit")
endif()

# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)

# Disable in-source builds to prevent source tree corruption.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "
FATAL: In-source builds are not allowed.
       You should create a separate directory for build files.
")
endif()

message("========================================")

# Project's name
project(simple)

#  compiler to build with C++14 with
set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE sources  src/*.c include/*.h)

#set (ADD_SOURCE_DIR "../src/")

set (ADD_INCLUDE_DIR #"${D}/usr/include/"
					 #"${D}/usr/lib/"
                                         "include/"
					 "../src/"
                     )					                

# Add additional include directory.

include_directories(${ADD_INCLUDE_DIR})
#source_directories(${ADD_SOURCE_DIR})


###############################################################################
## target definitions #########################################################
###############################################################################
add_executable (${LIBRARY_NAME} ${sources})
# Just for example add some compiler flags.
target_compile_options(${LIBRARY_NAME} PUBLIC -g -Wall -Wno-write-strings )

target_link_libraries(${LIBRARY_NAME} ${LIB_SOURCES})

# Set the output folder where your program will be created

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included

include_directories("${PROJECT_SOURCE_DIR}")

add_executable(simple ${PROJECT_SOURCE_DIR}/simple.c)


