#include <iostream>
using namespace std;

struct point{
    int xpos;
    int ypos;

    void movepos(int x, int y){
        xpos+=x;
        ypos+=y;
    }

    void addpoint(const point &pos){
        xpos+=pos.xpos;
        ypos+=pos.ypos;
    }

    void showposition(){
        cout<<"xpos: "<< xpos<<endl;
        cout<<"ypos: "<< ypos<< endl;
    }
}; 


int main(){
    point pos1={12,4};
    point pos2={20,30};

    pos1.movepos(-7,10);
    pos1.showposition();

    pos1.addpoint(pos2);
    pos1.showposition();

    return 0;

    
}