#include "additional_functions.hpp"
#include <iostream>
#include <type_traits>

template <typename T>
void menu()
{
    std::cout << "Welcome to our airport!" << std::endl;
    std::cout << "How can we help you" << std::endl;
    int choice;
    
    
    while (true)
    {
        std::cout << "Please give me a number what can we do for you" << std::endl;
        std::cout << "1. Sign up" << std::endl;
        std::cout << "2. Sign in" << std::endl;
        std::cout << "3. Check flight" << std::endl;
        static_assert(std::is_same<T,int>::choice, "It needs to be an int");
        std::cin >> choice;
    }
    
    

}
