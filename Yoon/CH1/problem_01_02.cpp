#include <iostream>

void swap(int* num1, int* num2){
    int temp= *num1;
    *num1=*num2;
    *num2=temp;
}

void swap(char* num1, char* num2){
    char temp= *num1;
    *num1=*num2;
    *num2=temp;
}

void swap(double* num1, double* num2){
    double temp= *num1;
    *num1=*num2;
    *num2=temp;
}

int main(){
    int num1=20,num2=30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    char ch1='A', ch2='B';
    swap(&ch1, &ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;

    double dbl1=1.111, dbl2=5.555;
    swap(&dbl1, &dbl2);
    std::cout<<dbl1<<' '<<dbl2<<std::endl;
}