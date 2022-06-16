#include <iostream>
using namespace std;

bool ispositive(int num){
    if(num<=0){
        return false;
    }
    else
        return true;
}

int main(){
    bool ispos;
    int num;
    cout<<"input number: ";
    cin>>num;

    ispos=ispositive(num);
    if(ispos)
        cout<<"positive number"<<endl;
    else
        cout<<"Negative number"<<endl;

    return 0;
}