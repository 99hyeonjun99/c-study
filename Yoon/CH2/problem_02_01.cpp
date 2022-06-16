#include <iostream>
using namespace std;

int add(int &num){
    return num+1;
}

int sign(int &num){
    return num-num-num;
}

int main(){
    int num, num2, num3;
    cout<<"input number";
    cin>>num;

    num2=add(num);
    cout<<num2<<endl;

    num3=sign(num);
    cout<<num3<<endl;
}