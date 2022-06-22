#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account{
    private:
        char* name;
        int accountID;
        int money;
    
    public:
        Account(char* cname, int accountID, int money);
        Account(const Account &ref);
        void SetAccount(char* name, int accountID, int money);
        virtual void addMoney(int money);
        void subMoney(int money);

        int Getmoney() const;
        int getAccountID() const;
        virtual void ShowAccount() const;
        ~Account();
};

#endif