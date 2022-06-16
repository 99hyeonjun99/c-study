#include <iostream>
#include <string.h>
using namespace std;

char* makestradr(int len){
    char* str=new char[len];
    return str;
}

int main(){
    char* str=makestradr(20);
    strcpy(str, "I am so happy~");
    cout<<str<<endl;

    delete []str;
    return 0;

}