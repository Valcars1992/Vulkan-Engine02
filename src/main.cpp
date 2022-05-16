#include "Engine/vkWindow.hpp"

#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main() {
    vkWindow vkApp;

    try {
        vkApp.Run();
    } 
    catch (const std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}