#include "Engine/vkApplication.hpp"

#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main() {
    vkApplication vkApp;

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