//
// точка входа
//

#include <assert.h>

// #define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

int main(int argc, char **args)
{
    if (!glfwInit())
        return -1;

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow *window = glfwCreateWindow(800, 600, "Opty", nullptr, nullptr);
    if(!window)
        return -2;

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}
