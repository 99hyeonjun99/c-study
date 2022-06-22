#include <iostream>
#include <cstring>
#include "Account.h"
using namespace std;

Account::Account(char* cname, int accountID, int money):accountID(accountID),money(money){
    int len=strlen(cname)+1;
    name=new char(len);
    strcpy(name,cname);
}

Account::Account(const Account &ref):accountID(ref.accountID), money(ref.money){
    name=new char[strlen(ref.name)+1];
    strcpy(name,ref.name);
}

void Account:: SetAccount(char* name, int accountID, int money){
    int len=strlen(name)+1;
    this->name=new char(len);
    
    strcpy(this->name,name);
    this->accountID=accountID;
    this->money=money;
}

void Account:: addMoney(int money){
    this->money+=money;
}

void Account::subMoney(int money){
    if(money>this->money){
        cout<<"you didn't have this money"<<endl;
    }
    else{
        this->money-=money;
    }
}

int Account:: Getmoney() const{
    return money;
}

int Account:: getAccountID() const {
    return accountID;
}

void Account:: ShowAccount() const {
    cout<<"account id= "<<accountID<<endl;
    cout<<"your money= "<<money<<endl;
    cout<<"your name= "<<name<<endl;
}

Account:: ~Account(){
    delete []name;
}
