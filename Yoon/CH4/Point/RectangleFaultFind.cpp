#include<iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main(){
    Point pos1;
    if(!pos1.InitMembers(-2,4))
        cout<<"init false!"<<endl;
    if(!pos1.InitMembers(2,4))
        cout<<"init false!"<<endl;

    Point pos2;
    if(!pos2.InitMembers(5,9))
        cout<<"init false!"<<endl;

    Rectangle rec;
    if(!rec.InitMembers(pos2,pos1))
        cout<<"init rectangle false!"<<endl;
        if(!rec.InitMembers(pos1,pos2))
        cout<<"init rectangle false!"<<endl;

    rec.ShowRecInfo();
    return 0;
    
}