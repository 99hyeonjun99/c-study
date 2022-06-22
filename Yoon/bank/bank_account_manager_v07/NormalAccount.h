#ifndef __NormalAccont_
#define __NormalAccont_
#include "Account.h"
#include <iostream>
using namespace std;

class NormalAccount :public Account{
    private:
        int interest;
    public:
        NormalAccount(char* cname, int accountID, int money, int inter): Account(cname, accountID, money), interest(inter){}
        
        void addMoney(int newmoney){
            Account::addMoney((int)(Getmoney()/100*interest)+newmoney);
        }

        void ShowAccount() const{
            Account::ShowAccount();
            cout<<"interest= "<<interest<<endl;

        }
};

#endif