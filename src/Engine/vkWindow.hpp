#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class vkWindow
{
    public:
        vkWindow();
        ~vkWindow();

        //Method Gets
        GLFWwindow* getWindow() { return m_window; }
        
    private:
        GLFWwindow* m_window;
        void InitWindow();

        const uint32_t WIDTH = 800;
        const uint32_t HEIGHT = 600;
        const char *titleWindow = "Vulkan Engine";

};