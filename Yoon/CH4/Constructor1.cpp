#include <iostream>
using namespace std;

class SimpleClass{
    private:
        int num1;
        int num2;
    public:
        SimpleClass(){
            num1=0;
            num2=0;
        }
        
        SimpleClass(int n){
            num1=n;
            num2=0;
        }

        SimpleClass(int n1, int n2){
            num1=n1;
            num2=n2;
        }

        void ShowData() const{
            cout<<num1<<' '<<num2<<endl;
        }
};

int main(){
    SimpleClass sc1;
    sc1.ShowData();

    SimpleClass SC2(100);
    SC2.ShowData();

    SimpleClass SC3(100, 200);
    SC3.ShowData();
}