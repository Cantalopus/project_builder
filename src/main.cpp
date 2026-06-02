#include <iostream>
#include "utilities.h"

int main(/*int argc, char** argv*/){

    double a{52.2};
    double b{63.5};
    double result = add(a,b);

    std::cout<<"Hello world"<<std::endl;
    std::cout<<"result : "<<result<<std::endl;

    return 0;
}