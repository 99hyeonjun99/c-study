#include <iostream>
using namespace std;

class SoSimple{
    private:
        int num;

    public:
        SoSimple(int n):num(n){
            cout<<"New Obj: "<<this<<endl;
        }
        SoSimple(const SoSimple& copy):num(copy.num){
            cout<<"New copy obj: "<<this<<endl;
        }
        ~SoSimple(){
            cout<<"Destrou obj:"<<this<<endl;
        }
      
};

SoSimple SimpleFuncObj(SoSimple ob){
    cout<<"Param ADR: "<<&ob<<endl;
    return ob;
}

int main(){
    SoSimple obj(7);
    SimpleFuncObj(obj);

    cout<<endl;
    SoSimple tempREf=SimpleFuncObj(obj);
    cout<<"Return obj "<<&tempREf<<endl;
    return 0;
}