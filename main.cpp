//
// точка входа
//

#include <assert.h>

// #define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

int main(int argc, char **args)
{
    //if (!glfwInit())
    //    return -1;

    assert(glfwInit() && "Initialization GLFW failed");

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow *window = glfwCreateWindow(800, 600, "Opty", nullptr, nullptr);
    assert(window && "Window or OpenGL context creation failed");

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}
