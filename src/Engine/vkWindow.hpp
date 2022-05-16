#pragma once

#include "vkDevice.hpp"


class vkWindow
{
    public:
        void Run();

        //Method Gets
        GLFWwindow* getWindow() { return m_window; }
        
    private:
        GLFWwindow* m_window;

        void InitWindow();
        void MainLoop();
        void Cleanup();



        const uint32_t WIDTH = 800;
        const uint32_t HEIGHT = 600;
        const char *titleWindow = "Vulkan Engine";

        //Variable Object class
        vkDevice m_device;

};