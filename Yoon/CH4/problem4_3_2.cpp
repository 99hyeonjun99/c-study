#include <iostream>
#include <cstring>
using namespace std;

namespace position{
    enum{Clerk, Senior, Assist, Manager
    };

    void showPositionInfo(int pos){
        switch(pos){
            case Clerk:
                cout<<"Clerk"<<endl;
            case Senior:
                cout<<"Senior"<<endl;
            case Assist:
                cout<<"Assist"<<endl;
            case Manager:
                cout<<"Manger"<<endl;
        }
    }
}


class NameCard{
    private:
        char* name;
        char* company_name;
        char* number;
        int position;
    public:
        NameCard(char* myname, char* mycompany_name, char* mynumber, int myposition){
            int len=strlen(myname)+1;
            name=new char[len];
            strcpy(name, myname);

            len=strlen(mycompany_name)+1;
            company_name=new char[len];
            strcpy(company_name,mycompany_name);

            len=strlen(mynumber)+1;
            number=new char[len];
            strcpy(number, mynumber);

            position=myposition;
        }

        void ShowNameCardInfo(){
            cout<<"name: "<<name<<endl;
            cout<<"company: "<<company_name<<endl;
            cout<<"phone number: "<<number<<endl;
            cout<<"position: "; 
            position::showPositionInfo(position);
        }

        ~NameCard(){
            delete []name;
            delete []company_name;
        }

};

int main(){
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", position::Clerk);
    NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", position::Senior);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", position::Assist);

    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
}