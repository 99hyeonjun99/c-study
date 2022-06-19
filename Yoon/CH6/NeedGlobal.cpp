#include <iostream>
using namespace std;

int simObjCnt=0;
int cmxObjCnt=0;

class SoSimple{
    public:
        SoSimple(){
            simObjCnt++;
            cout<<simObjCnt<<"-th Sosimple object."<<endl;
        }
};

class SoComplex{
    public:
        SoComplex(){
            cmxObjCnt++;
            cout<<cmxObjCnt<<"-th cmximple object."<<endl;
        }

        SoComplex(SoComplex const &copy){
            cmxObjCnt++;
            cout<<cmxObjCnt<<"-th cmximple object."<<endl;
        }
};

int main(){
    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex com2=com1;
    SoComplex();

    return 0;
}