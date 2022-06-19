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
        NameCard(const NameCard &copy): position(copy.position){
            int len=strlen(copy.name)+1;
            name=new char[len];
            strcpy(name, copy.name);

            len=strlen(copy.company_name)+1;
            company_name=new char[len];
            strcpy(company_name, copy.company_name);

            len=strlen(copy.number)+1;
            number=new char[len];
            strcpy(number, copy.number);
        }

        void ShowNameCardInfo() const {
            cout<<"name: "<<name<<endl;
            cout<<"company: "<<company_name<<endl;
            cout<<"phone number: "<<number<<endl;
            cout<<"position: "; 
            position::showPositionInfo(position);
        }

        ~NameCard(){
            delete []name;
            delete []company_name;
            delete []number;
        }

};

int main(){
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", position::Clerk);
    NameCard copy1=manClerk;
    NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", position::Senior);
    NameCard copy2=manSenior;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
    return 0;
}