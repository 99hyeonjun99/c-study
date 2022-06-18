#include <iostream>
using namespace std;

class Point{
    private:
        int xpos, ypos;
    public:
        Point(int x, int y):xpos(x), ypos(y){}
        void ShowPointInfo() const{
            cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
        }
};

class Circle{
    private:
        Point p;
        int Radius;
    
    public:
        Circle(int x, int y, int r):p(x,y), Radius(r){}

        void ShowCircleInfo() const{
            cout<<"radius: "<< Radius <<endl;
            p.ShowPointInfo();
        }

};

class Ring{
    private:
        Circle In;
        Circle Out;
    public:
        Ring(int x1, int y1, int r1, int x2, int y2, int r2 ): In(x1,y1,r1), Out(x2,y2,r2){}
        void ShowRingInfo() const {
            cout<<"inner circle info"<<endl;
            In.ShowCircleInfo();
            cout<<"Outer circle info"<<endl;
            Out.ShowCircleInfo();
        }
};

int main(){
    Ring ring(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}