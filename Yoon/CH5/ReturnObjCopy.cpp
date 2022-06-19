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
        SoSimple &Addnum(int n){
            num+=n;
            return *this;
        }
        void ShowSimpleData(){
            cout<<"num: "<<num<<endl;
        }
};

SoSimple SimpleFuncObj(SoSimple ob){
    cout<<"previent return"<<endl;
    return ob;
}

int main(){
    SoSimple sim1(7);
    SimpleFuncObj(sim1).Addnum(30).ShowSimpleData();
    sim1.ShowSimpleData();
    return 0;
}