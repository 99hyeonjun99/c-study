#include <iostream>
#include "BankingCommonDec1.h"
#include "AccountHandler.h"
using namespace std;


int main(){
    AccountHandler acc;
        int number=0;
        while(number!=5){  
            cout<<"accountnum= "<<acc.Get_num()<<endl;  
            acc.showmenu();
            cin>>number;
            if(number==1){
                acc.show_makemanu();
                cin>>number;
                if(number==1)
                    acc.make_account_normal();
                else if(number==2)
                    acc.make_account_credit();
                else
                    cout<<"wrong number";
                
            }
            else if(number==2){
                acc.input_money();
            }
            else if(number==3){
                acc.withdrawel_money();
            }
            else if(number==4){
                acc.check_account();
            }
    }
    return 0;
}