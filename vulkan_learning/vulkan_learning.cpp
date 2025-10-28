// vulkan_learning.cpp : Defines the entry point for the application.
//

#include "vulkan_learning.h"

int main() {

    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    
    GLFWwindow* window = glfwCreateWindow(800, 600, "METANIT.COM", nullptr, nullptr);

    while (!glfwWindowShouldClose(window)) {
        glfwWaitEvents();
    }

    glfwDestroyWindow(window);

    
    glfwTerminate();
}
