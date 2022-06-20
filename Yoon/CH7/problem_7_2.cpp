#include <iostream>
using namespace std;

class Rectangle{
    private:
        int leftup;
        int rightdown;
    public:
        Rectangle(int left, int right): leftup(left), rightdown(right){}

        void ShowAreaInfo(){
            cout<<"area: "<< leftup*rightdown<<endl;
        }
};

class Square: public Rectangle{
    public:
        Square(int n): Rectangle(n, n){}

        void ShowAreaInfo(){
            Rectangle::ShowAreaInfo();
        }
};

int main(){
    Rectangle rec(4, 3);
    rec.ShowAreaInfo();

    Square sqr(7);
    sqr.ShowAreaInfo();
    return 0;
}