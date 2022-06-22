//const 추가
#include <iostream>
#include <cstring>
using namespace std;

class Account{
    private:
        char* name;
        int accountID;
        int money;
    
    public:
        Account(char* cname, int accountID, int money):accountID(accountID),money(money){
            int len=strlen(cname)+1;
            name=new char(len);
            strcpy(name,cname);
            
        }
        Account(const Account &ref):accountID(ref.accountID), money(ref.money){
            name=new char[strlen(ref.name)+1];
            strcpy(name,ref.name);
        };

        void SetAccount(char* name, int accountID, int money){
            int len=strlen(name)+1;
            this->name=new char(len);
            
            strcpy(this->name,name);
            this->accountID=accountID;
            this->money=money;
        }

        virtual void addMoney(int money){
            this->money+=money;
        }

        void subMoney(int money){
            if(money>this->money){
                cout<<"you didn't have this money"<<endl;
            }
            else{
                this->money-=money;
            }
        }

        int Getmoney() const{
            return money;
        }

        int getAccountID() const {
            return accountID;
        }
        
        virtual void ShowAccount() const {
            cout<<"account id= "<<accountID<<endl;
            cout<<"your money= "<<money<<endl;
            cout<<"your name= "<<name<<endl;
        }
        
        ~Account(){
            delete []name;
        }

    
};

namespace CREDIT{
    enum{
        A=7,
        B=4,
        C=2
    };
}

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

class HighCreditAccount :public Account{
    private:
        int credit;
    public:
        HighCreditAccount(char* cname, int accountID, int money, int inter): Account(cname, accountID, money){
            if(inter==1)
                credit=CREDIT::A;
            else if(inter==2)
                credit=CREDIT::B;
            else if(inter==3)
                credit=CREDIT::C;
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

void menu(){
    

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
    

}

int main(){
    
    
    menu();
    return 0;
}