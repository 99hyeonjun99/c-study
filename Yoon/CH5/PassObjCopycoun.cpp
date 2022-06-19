#include <iostream>
using namespace std;

class SoSimple{
    private:
        int num;

    public:
        SoSimple(int n):num(n){}
        SoSimple(SoSimple &copy):num(copy.num){
            cout<<"Called SoSimple(SoSimple &copy)"<<endl;
        }
        void ShowSimpleData(){
            cout<<"num: "<<num<<endl;
        }
};

void SimpleFuncObj(SoSimple ob){
    ob.ShowSimpleData();
}

int main(){
    SoSimple sim1(30);
    cout<<"function called"<<endl;
    SimpleFuncObj(sim1);
    cout<<"function call"<<endl;
    return 0;
}