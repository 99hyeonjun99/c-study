#include <iostream>
using namespace std;

class SoBase{
    private:
        int basenum;
    public:
        SoBase() : basenum(20){
            cout<<"SoBase()"<<endl;
        }

        SoBase(int n): basenum(n){
            cout<<"SoBase(int n)"<<endl;
        }

        void ShowBaseData(){
            cout<<basenum<<endl;
        }
};

class SoDerive : public SoBase{
    private:
        int derivNum;
    public:
        SoDerive(): derivNum(30){
            cout<<"SoDerived()"<<endl;
        }
        SoDerive(int n) :derivNum(n){
            cout<<"SoDerived(int n)"<<endl;
        }
        SoDerive(int n1, int n2): SoBase(n1), derivNum(n2){
            cout<<"SoDerived(int n1, int n2)"<<endl;
        }

        void ShowDerivData(){
            ShowBaseData();
            cout<<derivNum<<endl;
        }
};

int main(){
    cout<<"case1.... "<<endl;
    SoDerive dr1;
    dr1.ShowDerivData();
    cout<<"-------------"<<endl;

    cout<<"case2....."<<endl;
    SoDerive dr2(12);
    dr2.ShowDerivData();
    cout<<"---------------"<<endl;

    cout<<"case3...."<<endl;
    SoDerive dr3(23,24);
    dr3.ShowDerivData();
    return 0;

}