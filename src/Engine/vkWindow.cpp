#include "vkWindow.hpp"


/* ========================================================================== */
/*                                     Run                                    */
/* ========================================================================== */
void vkWindow::Run()
{
    InitWindow();
    m_device.InitVulkan();
    MainLoop();
    Cleanup();
}


/* ========================================================================== */
/*                                 initWindow                                 */
/* ========================================================================== */
void vkWindow::InitWindow()
{
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    m_window = glfwCreateWindow(WIDTH, HEIGHT, titleWindow, nullptr, nullptr);
}


/* ========================================================================== */
/*                                  MainLoop                                  */
/* ========================================================================== */
void vkWindow::MainLoop()
{
    while (!glfwWindowShouldClose(m_window)) 
    {
        glfwPollEvents();
    }
}



/* ========================================================================== */
/*                                   Cleanup                                  */
/* ========================================================================== */
void vkWindow:: Cleanup()
{
    vkDestroyInstance(m_device.getInstance(), nullptr);

    glfwDestroyWindow(m_window);
    glfwTerminate();
}

