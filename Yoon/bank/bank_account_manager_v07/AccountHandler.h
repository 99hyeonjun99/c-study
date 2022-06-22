#ifndef __AccountHandler_
#define __AccountHandler_
#include "Account.h"
#include <iostream>

class AccountHandler{
    private:
        Account *acc[100];
        int num;
    public:
        AccountHandler(Account *account[100]){
            acc[100]=account[100];
            num=0;
        }

        AccountHandler():num(0){}
        void showmenu();
        void show_makemanu();
        void make_account_normal();
        void make_account_credit();
        void input_money();
        void withdrawel_money();
        void check_account();
        int Get_num();        

};

#endif