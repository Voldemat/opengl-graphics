cmake_minimum_required(VERSION 3.10)
project(opengl)
file(GLOB files
    "src/*.hpp"
    "src/*.cpp"
)
add_executable(main ${files})

include_directories(${CMAKE_SOURCE_DIR}/include)
target_link_libraries(main LINK_PUBLIC ${CMAKE_SOURCE_DIR}/libs/libglfw3.a "-framework Cocoa -framework IOKit")