#include <iostream>

int main(void){
    int a[5] = {NULL, };
    for(int i=0; i<5; i+=1)
        std::cout<< a[i] << " ";

    // int b[5] = {nullptr, }; err
    int b[5];
    for(int i=0; i<5; i+=1)
        std::cout<< b[i] << " ";
        
    return 0;
}