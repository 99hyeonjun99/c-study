#include <iostream>
#include <cstring>
using namespace std;

typedef struct{
    char name[100];
    int accountid;
    int money;
} Account;

Account acc[100];
int accountnum=0;

void init(){
    for(int i=0;i<100;i++){
        
        acc[i].accountid=0;
        acc[i].money=0;
        
    }
}

void make_account(){
    char name[100];
    cout<<"input name"<<endl;
    cin>>name;

    int money;
    cout<<"input money"<<endl;
    cin>>money;

    int accountid;
    cout<<"input account id"<<endl;
    cin>>accountid;

    strcpy(acc[accountnum].name, name);
    acc[accountnum].money=money;
    acc[accountnum].accountid=accountid;

    accountnum+=1;

}

void input_money(){
    int accountid;
    cout<<"input account id"<<endl;
    cin>>accountid;

    int money;
    cout<<"input money"<<endl;
    cin>>money;

    int check=1;

    for(int i=0;i<100;i++){
        if(acc[i].accountid==accountid){
            acc[i].money+=money;
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

    for(int i=0;i<100;i++){
        if(acc[i].accountid==accountid){
            if(acc[i].money>=money){
                acc[i].money-=money;
            }
            else{
                cout<<"you didn't have this money"<<endl;
            }
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

    for(int i=0;i<100;i++){
        if(acc[i].accountid==accountid){
            cout<<"account id= "<<acc[i].accountid<<endl;
            cout<<"your money= "<<acc[i].money<<endl;
            cout<<"your name= "<<acc[i].name<<endl;
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
    while(number!=5){  
        cout<<"accountnum= "<<accountnum<<endl;  
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
    init();
    menu();
}