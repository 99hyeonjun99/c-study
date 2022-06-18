#include <iostream>
#include <cstring>
using namespace std;

class SoSimple{
    private:
        int num;
    public:
        SoSimple(int n): num(n){
            cout<<"num= "<<num<<",";
            cout<<"address= "<<this<<endl;
        }

        void showsimpledata(){
            cout<<num<<endl;
        }

        SoSimple* GetthisPoint(){
            return this;
        }
};

int main(){
    SoSimple sim1(100);
    SoSimple * ptr1=sim1.GetthisPoint();
    cout<<ptr1<<" ";
    ptr1->showsimpledata();

    SoSimple sim2(200);
    SoSimple * ptr2=sim2.GetthisPoint();
    cout<<ptr2<<" , ";
    ptr2->showsimpledata();
    return 0;


}