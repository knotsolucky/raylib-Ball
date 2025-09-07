cmake_minimum_required(VERSION 3.15)
project(my_project)

# Add the include directory to the search path for header files
include_directories(include)

find_package(raylib 3.0 REQUIRED) # Requires at least version 3.0

set(CMAKE_C_STANDARD 11) # Requires C11 standard

# List all source files here, separated by spaces
add_executable(${PROJECT_NAME} src/main.c)

target_link_libraries(${PROJECT_NAME} raylib)

# Checks if OSX and links appropriate frameworks (only required on MacOS)
if(APPLE)
  target_link_libraries(${PROJECT_NAME} "-framework IOKit")
  target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
  target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()

# BRUH I HAD TO USE CHATGPT, FUCK CMAKE!
