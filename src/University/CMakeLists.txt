add_library(University
    src/University.hpp
    src/University.cpp
)

target_include_directories(University PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")