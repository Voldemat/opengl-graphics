cmake_minimum_required(VERSION 3.10)
project(opengl)
file(GLOB files
    "src/*.hpp"
    "src/*.cpp"
)
add_executable(main ${files})

if (APPLE)
    set(PLATFORM_LINKS "-framework CoreVideo -framework IOKit -framework Cocoa -framework Carbon")
    set(GLFW_LINK ${CMAKE_SOURCE_DIR}/libs/glfw/arm64/libglfw3.a)
endif(APPLE)
if (UNIX AND NOT APPLE)
    set(PLATFORM_LINKS "-lX11")
    set(GLFW_LINK ${CMAKE_SOURCE_DIR}/libs/glfw/x86_64/libglfw3.a)
endif(UNIX AND NOT APPLE)

include_directories(${CMAKE_SOURCE_DIR}/include)
target_link_libraries(
    main LINK_PUBLIC
    ${GLFW_LINK}
    ${PLATFORM_LINKS}
)
