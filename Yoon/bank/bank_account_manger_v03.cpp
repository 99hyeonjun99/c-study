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

        void addMoney(int money){
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

        int getAccountID() const {
            return accountID;
        }
        
        void ShowAccount(){
            cout<<"account id= "<<accountID<<endl;
            cout<<"your money= "<<money<<endl;
            cout<<"your name= "<<name<<endl;
        }
        
        ~Account(){
            delete []name;
        }

    
};

Account *acc[100];
int num=0;

void make_account(){

    
    char name[20];
    cout<<"input name"<<endl;
    cin>>name;

    int money;
    cout<<"input money"<<endl;
    cin>>money;

    int accountid;
    cout<<"input account id"<<endl;
    cin>>accountid;

    acc[num++]=new Account(name, accountid, money);
    
}

void input_money(){
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

void withdrawel_money(){
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

void check_account(){
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

void menu(){
    cout<<"---------------------"<<endl;
    cout<<"1. make_account"<<endl;
    cout<<"2. depoit"<<endl;
    cout<<"3. withdrew"<<endl;
    cout<<"4. check_account"<<endl;
    cout<<"5. program exit"<<endl;
    cout<<"choice please"<<endl;

    int number=0;
    
    int accountnum=0;
    while(number!=5){  
        cout<<"accountnum= "<<num<<endl;  
        cout<<"choice please"<<endl;
        cin>>number;
        if(number==1){
            make_account();
            
        }
        else if(number==2){
            input_money();
        }
        else if(number==3){
            withdrawel_money();
        }
        else if(number==4){
            check_account();
        }
        
    }
    

}

int main(){
    
    
    menu();
}