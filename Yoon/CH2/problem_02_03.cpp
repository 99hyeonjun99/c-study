#include <iostream>
#include <string.h>
using namespace std;

typedef struct __point{
    int xpos;
    int ypos;
} point;

point& pntadder(const point &p1, const point &p2){
    point* p3= new point;
    p3->xpos=p1.xpos+p2.xpos;
    p3->ypos=p1.ypos+p2.ypos;

    return* p3;
}

int main(){
    point* p1=new point;
    point* p2=new point;

    cin>>(p1->xpos)>>(p1->ypos);
    cin>>(p2->xpos)>>(p2->ypos);

    point* p3= new point;

    *p3=pntadder(*p1,*p2);

    cout<<(p3->xpos)<<" "<<(p3->ypos)<<endl;
    delete p1;
    delete p2;
    delete p3;

}