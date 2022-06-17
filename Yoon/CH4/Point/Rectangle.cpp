#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr){
    if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY()){
        cout<<"wrong position!"<<endl;
        return false;
    }
    upLeft=ul;
    lowRight=lr;
    return true;
}

void Rectangle::ShowRecInfo() const{
    cout<<"left up: "<<'['<<upLeft.GetX()<<",";
    cout<<upLeft.GetY()<<']'<<endl;
    cout<<"Right down: "<<'['<<lowRight.GetX()<<",";
    cout<<lowRight.GetY()<<']'<<endl;
}