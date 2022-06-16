#include <iostream>
using namespace std;

int main(){
    int num=10;
    int i=0;

    cout<<"true:" <<true<<endl;
    cout<<"False: "<<false<<endl;

    while(true){
        cout<<i++<<' ';
        if(i>num){
            break;
        }
    }

    cout<<"sizof 1:"<<sizeof(1)<<endl;
    cout<<"sizof 0:"<<sizeof(0)<<endl;
    cout<<"sizof true:"<<sizeof(true)<<endl;
    cout<<"sizof false:"<<sizeof(false)<<endl;

    return 0; 
} 