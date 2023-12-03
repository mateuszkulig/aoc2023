cmake_minimum_required(VERSION 3.1...3.27)

# Advent of Code 2023 puzzles
project(AoC2023 VERSION 1.0 LANGUAGES C)

# Lib containing things to help in puzzles
add_subdirectory(utils)

# Build the executable from the folder with same name as it, link it against utilities
function(buildAndLink argFile)
    add_executable(${argFile} ${argFile}/${argFile}.c)
    target_link_libraries(${argFile} utilities)
endfunction(buildAndLink)

# Wrap the boilerplate from add_custom_command that copies file into build directory
function(copyToBuildDir argDir argFile)
    add_custom_command(TARGET ${argDir} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/${argDir}/${argFile} ${CMAKE_BINARY_DIR})
endfunction(copyToBuildDir)

# Executable for each day, each linked with utilities
buildAndLink(day01)

# Copy inputs
copyToBuildDir(day01 input01.txt)

# Include utilities references
include_directories(utils)
