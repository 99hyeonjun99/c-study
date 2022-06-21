#include <iostream>
using namespace std;

class First{
    public:
        virtual void Myfunc(){
            cout<<"FirstFunc"<<endl;
        }
};

class Second: public First{
    public:
        virtual void Myfunc(){
            cout<<"SecondFunc"<<endl;
        }
};

class Third: public Second{
    public:
        virtual void Myfunc(){
            cout<<"ThirdFunc"<<endl;
        }
};

int main(){
    Third* tptr=new Third();
    Second* sptr=tptr;
    First* fptr=sptr;

    fptr->Myfunc();
    sptr->Myfunc();
    tptr->Myfunc();
    delete tptr;
    return 0;
}