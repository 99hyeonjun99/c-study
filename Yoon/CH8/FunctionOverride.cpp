#include <iostream>
using namespace std;

class First{
    public:
        void MyFunc(){
            cout<<"First Func"<<endl;
        }
};

class Second :public First{
    public:
        void MyFunc(){
            cout<<"Second Func"<<endl;
        }
};

class Third: public Second{
    public:
        void MyFunc(){
            cout<<"Third Func"<<endl;
        }
};

int main(){
    Third* tptr=new Third();
    Second* sptr=tptr;
    First* fptr=sptr;

    fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();
    delete tptr;
    return 0;
}