#include <iostream>
using namespace std;

class Baseone{
    public:
        void SimplefFunc(){
            cout<<"BaseOne"<<endl;
        }
};

class BaseTwo{
    public:
        void SimpleFunc(){
            cout<<"BaseTwo"<<endl;
        }
};

class MultiDerived: public Baseone, protected BaseTwo{
    public:
        void ComplexFunc(){
            Baseone::SimplefFunc();
            BaseTwo::SimpleFunc();
        }
};

int main(){
    MultiDerived mdr;
    mdr.ComplexFunc();
    return 0;
}