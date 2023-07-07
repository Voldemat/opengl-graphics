#include <iostream>
#include <GLFW/glfw3.h>

#define print(x) std::cout << x << std::endl

#define WINDOW_HEIGHT 640
#define WINDOW_WIDTH 480

int main() {
    if (!glfwInit())
    {
        print("GLFW Initialization failed");
        return 1;
    }
    GLFWwindow* window = glfwCreateWindow(WINDOW_HEIGHT, WINDOW_WIDTH, "My Title", NULL, NULL);
    if (window == NULL) {
        print("Window creation failed");
        glfwTerminate();
        return 1;
    }
    
    while (!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
