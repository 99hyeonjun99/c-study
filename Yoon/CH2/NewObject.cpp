#include <iostream>
#include <string.h>
using namespace std;

class simple{
    public:
        simple(){
            cout<<"I am simple constructor!"<<endl;
        }
};

int main(){
    cout<<"case1"<<endl;
    simple* sp1=new simple;
    cout<<"case2"<<endl;
    simple* sp2=(simple*)malloc(sizeof(simple)*1);

    cout<<endl<<"end of main"<<endl;
    delete sp1;
    free(sp2);
    return 0;
}