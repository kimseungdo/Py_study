#include <iostream>
#include <cmath>

#include <typeinfo>

int main(void){
    std::cout<< typeid(pow(3.1, 2)).name();
    return 0;
}