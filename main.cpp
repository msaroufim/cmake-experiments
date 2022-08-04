#include <iostream>
#include <adder.h>
#include <GLFW/glfw3.h>
#include <HelloWorldConfig.h>

int main(int argc, char* argv[]) {
    
    std::cout << "Hey Mark!";
    
    // Use our own defined library
    std::cout << add(72.1 , 73.8) << "\n";

    // This does nothing but just to make sure we can use an external library
    GLFWwindow *window;


    std::cout << argv[0] << "Version " << HelloWorld_VERSION_MAJOR << "." << HelloWorld_VERSION_MINOR << '\n';

    return 0;
}