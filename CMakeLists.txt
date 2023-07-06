cmake_minimum_required(VERSION 3.10)
project(opengl)
file(GLOB files
    "src/*.hpp"
    "src/*.cpp"
)
add_executable(main ${files})

if (APPLE)
    set(PLATFORM_LINKS "-framework Cocoa -framework IOKit")
    set(GLFW_LINK ${CMAKE_SOURCE_DIR}/libs/glfw/arm64/libglfw3.a)
endif(APPLE)
if (LINUX)
    set(PLATFORM_LINKS "-lGL")
    set(GLFW_LINK ${CMAKE_SOURCE_DIR}/libs/glfw/x86_64/libglfw3.a)
endif(LINUX)

include_directories(${CMAKE_SOURCE_DIR}/include)
target_link_libraries(
    main LINK_PUBLIC
    ${PLATFORM_LINKS}
    ${GLFW_LINK}
)