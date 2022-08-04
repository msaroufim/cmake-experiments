# CMake is a tool to generate Makefiles

# I ran cmake --version on my mac
cmake_minimum_required(VERSION 3.23.3)

# Binary will be called HelloWorld
project(HelloWorld VERSION 1.0)

# Setup configuration file to determine version
configure_file(HelloWorldConfig.h.in HelloWorldConfig.h)

# Picks up the project name automatically here
# Put all the files I will need here
add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

# adder use logic
option(USE_ADDER "A simple library for adding 2 floats" ON)

if(USE_ADDER)
    # Adder matches name of directory
    add_subdirectory(Adder)
endif()

add_subdirectory(external/glfw)

# This should allow me to change include <Adder/adder.h> to include <adder.h>
target_include_directories(${PROJECT_NAME}
    PUBLIC Adder
    # These are the libraries that glfw wants us to install
    PUBLIC external/glfw/include
)

target_link_directories(${PROJECT_NAME} 
    PRIVATE Adder
    # It's a convention to have cmake files in include directory
    PRIVATE external/glfw/src
)

target_link_libraries(${PROJECT_NAME} adder glfw)

install(TARGETS ${PROJECT_NAME} DESTINATION BIN)
install(FILES ${PROJECT_BINARY_DIR}/HelloWorldConfig.h DESTINATION include)