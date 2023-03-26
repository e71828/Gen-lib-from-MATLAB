cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(eigmatrix LANGUAGES CXX)

set(USAGE eig)
set(MATLAB_EX_PATH C:\\Program\ Files\\MATLAB\\R2022b\\extern)
message("${MATLAB_EX_PATH}")
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${MATLAB_EX_PATH}/include ${MATLAB_EX_PATH}/include/win64)
link_directories(${CMAKE_CURRENT_SOURCE_DIR} ${MATLAB_EX_PATH}/lib/win64/mingw64)
set(STATIC_LIBRARY mclmcrrt.lib)

add_executable(${USAGE} samples/${CMAKE_PROJECT_NAME}sample1_mwarray.cpp ${CMAKE_PROJECT_NAME}.h)
target_link_libraries(${USAGE} ${STATIC_LIBRARY} ${CMAKE_PROJECT_NAME}.lib)

add_custom_command(TARGET ${USAGE} POST_BUILD              # Adds a post-build event to MyTest
    COMMAND ${CMAKE_COMMAND} -E copy_if_different          # which executes "cmake - E copy_if_different..."
        "${PROJECT_SOURCE_DIR}/${CMAKE_PROJECT_NAME}.dll"  # <--this is in-file
        $<TARGET_FILE_DIR:${USAGE}>)                       # <--this is out-file path
