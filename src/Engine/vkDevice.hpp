#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>



class vkDevice
{
    public:
        void InitVulkan();

        //Method Gets
        VkInstance getInstance() { return m_instance; }

    private:
        VkInstance m_instance;
        void CreateInstance();

};