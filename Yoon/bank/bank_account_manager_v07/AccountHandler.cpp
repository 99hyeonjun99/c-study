#include <iostream>
#include "Account.h"
#include "AccountHandler.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include "BankingCommonDec1.h"

using namespace std;

void AccountHandler::showmenu(){
    cout<<"---------------------"<<endl;
    cout<<"1. make_account"<<endl;
    cout<<"2. depoit"<<endl;
    cout<<"3. withdrew"<<endl;
    cout<<"4. check_account"<<endl;
    cout<<"5. program exit"<<endl;
    cout<<"choice please"<<endl;
}

void AccountHandler::show_makemanu(){
    cout<<"choice account"<<endl;
    cout<<"1. NoramalAccount, 2.HighCreditAccount"<<endl;
}

void AccountHandler::make_account_normal(){

    
    char name[20];
    cout<<"input name"<<endl;
    cin>>name;

    int money;
    cout<<"input money"<<endl;
    cin>>money;

    int accountid;
    cout<<"input account id"<<endl;
    cin>>accountid;

    int interest;
    cout<<"input interest"<<endl;
    cin>>interest;

    acc[num++]=new NormalAccount(name, accountid, money, interest);
    
}

void AccountHandler::make_account_credit(){

    
    char name[20];
    cout<<"input name"<<endl;
    cin>>name;

    int money;
    cout<<"input money"<<endl;
    cin>>money;

    int accountid;
    cout<<"input account id"<<endl;
    cin>>accountid;

    int interest;
    cout<<"input creditRank (1 to A. 2 to B, 3 to C)"<<endl;
    cin>>interest;

    acc[num++]=new HighCreditAccount(name, accountid, money, interest);
    
}

void AccountHandler::input_money(){
    int accountid;
    cout<<"input account id"<<endl;
    cin>>accountid;

    int money;
    cout<<"input money"<<endl;
    cin>>money;

    int check=1;

    for(int i=0;i<num;i++){
        cout<<acc[i]->getAccountID();
        if(acc[i]->getAccountID()==accountid){
            acc[i]->addMoney(money);
            check=0;
        }
    }
    if(check==1){
        cout<<"you input wrong id"<<endl;
    }
}

void AccountHandler::withdrawel_money(){
    int accountid;
    cout<<"input account id"<<endl;
    cin>>accountid;

    int money;
    cout<<"input money"<<endl;
    cin>>money;

    int check=1;

    for(int i=0;i<num;i++){
        if(acc[i]->getAccountID()==accountid){
            acc[i]->subMoney(money);
            check=0;
        }
    }
    if(check==1){
        cout<<"you input wrong id"<<endl;
    }
}

void AccountHandler::check_account(){
    int accountid;
    cout<<"input account id"<<endl;
    cin>>accountid;

    int check=1;

    for(int i=0;i<num;i++){
        if(acc[i]->getAccountID()==accountid){
            acc[i]->ShowAccount();
        }
        check=0;
    }
    if(check==1){
        cout<<"you input wrong id"<<endl;
    }

}

int AccountHandler::Get_num(){
    return num;
}