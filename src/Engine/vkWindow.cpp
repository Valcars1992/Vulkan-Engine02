#include "vkWindow.hpp"


//COSTRUTTORE
/* ========================================================================== */
/*                                  vkWindow                                  */
/* ========================================================================== */
vkWindow::vkWindow()
{
    InitWindow();
}



//!DISTRUTTORE
/* ========================================================================== */
/*                                  ~vkWindow                                 */
/* ========================================================================== */
vkWindow::~vkWindow()
{
    glfwDestroyWindow(m_window);
    glfwTerminate();
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

