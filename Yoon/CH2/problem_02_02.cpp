#include <iostream>
using namespace std;

int main(){
    const int num=12;
    const int *num2= &num;
    const int &num3=*num2;

    cout<<num3;
}