cmake_minimum_required(VERSION 3.10)
project(opengl)
file(GLOB files
    "src/*.hpp"
    "src/*.cpp"
)
add_executable(main ${files})

if (APPLE)
    set(PLATFORM_LINKS "-framework Cocoa -framework IOKit")
endif(APPLE)
if (LINUX)
    set(PLATFORM_LINKS "-lGL")
endif(LINUX)

include_directories(${CMAKE_SOURCE_DIR}/include)
target_link_libraries(
    main LINK_PUBLIC
    ${CMAKE_SOURCE_DIR}/libs/libglfw3.a
    ${PLATFORM_LINKS}
)