#include <iostream>
#include <GLFW/glfw3.h>

int main() {
    if (!glfwInit())
    {
        std::cout << "GLFW Initialization failed" << std::endl;
    }
    std::cout << "Hello world!" << std::endl;
    return 0;
}
