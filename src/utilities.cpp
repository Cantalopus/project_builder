#include <iostream>
#include <limits>

double add(double a, double b){
    return a + b;
}

void keep_window_open(){
    std::cout<<"Press Enter to exit... ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

void error(std::string message){
    throw std::runtime_error(message);
}