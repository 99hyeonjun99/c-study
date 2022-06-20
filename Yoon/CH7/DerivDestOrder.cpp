#include <iostream>
using namespace std;

class SoBase{
    private:
        int basenum;
    public:

        SoBase(int n): basenum(n){
            cout<<"SoBase(int n)"<<endl;
        }
        ~SoBase(){
            cout<<"~SoBase(): "<<basenum<<endl;
        }
};

class SoDerive : public SoBase{
    private:
        int derivNum;
    public:
    
        SoDerive(int n) :derivNum(n), SoBase(n){
            cout<<"SoDerived(int n)"<<endl;
        }
        ~SoDerive(){
            cout<<"~SoDerive(): "<<derivNum<<endl;
        }
};

int main(){
    SoDerive drv1(15);
    SoDerive drv2(27);
    return 0;

}