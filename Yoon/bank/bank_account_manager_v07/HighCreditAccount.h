#ifndef __HighCreditAccount_
#define __HighCreditAccount_
#include "Account.h"
#include <iostream>
#include "BankingCommonDec1.h"
using namespace std;

class HighCreditAccount :public Account{
    private:
        int credit;
    public:
        HighCreditAccount(char* cname, int accountID, int money, int inter): Account(cname, accountID, money){
            if(inter==1)
                credit=A;
            else if(inter==2)
                credit=B;
            else if(inter==3)
                credit=C;
            else{
                cout<<"wrong number!!";
                return;
            }
        }

        void addMoney(int newmoney){
            Account::addMoney((Getmoney()/100*credit)+newmoney);
        }

        void ShowAccount() const{
            Account::ShowAccount();
            cout<<"interest= "<<credit<<endl;

        }
};


#endif