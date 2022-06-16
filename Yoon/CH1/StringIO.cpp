#include <iostream>

int main(){
    char name[100];
    char lang[200];

    std::cout<<"What your name?";
    std::cin>>name;

    std::cout<<"What your favorite programming language?";
    std::cin>>lang;

    std::cout<<"My name is "<<name<<'\n';
    std::cout<<"My favorite programming language is "<<lang<<'\n';
}