#include <iostream>
using namespace std;

class SelfRef{
    private:
        int num;
    public:
        SelfRef(int n) : num(n){
            cout<<"Create Reference"<<endl;
        }

        SelfRef& Adder(int n){
            num+=n;
            return *this;
        }

        SelfRef& ShowNumber(){
            cout<<num<<endl;
            return *this;
        }

};

int main(){
    SelfRef obj(3);
    SelfRef &ref= obj.Adder(2);

    obj.ShowNumber();
    ref.ShowNumber();

    ref.Adder(1).ShowNumber().Adder(2).ShowNumber();
    return 0;
}