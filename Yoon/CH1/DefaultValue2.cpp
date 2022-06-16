#include <iostream>

int adder(int num1=1, int num2=2);

int main(){
    std::cout<<adder()<<std::endl;
    std::cout<<adder(5)<<std::endl;
    std::cout<<adder(3, 5)<<std::endl;
    return 0;
}

int adder(int num1, int num2){
    return num1+num2;
}