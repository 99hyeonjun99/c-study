#include <iostream>
#include <cstring>
using namespace std;

class Person{
    private:
        char * name;
        int age;
    public:
        Person(char* myname, int myage){
            int len=strlen(myname)+1;
            name=new char[len];
            strcpy(name, myname);
            age=myage;
        }

        Person(){
            name=NULL;
            age=0;
            cout<<"called Person()"<<endl;
        }

        void SetPersonInfo(char * myname, int myage){
            name=myname;
            age=myage;
        }

        void showpersoninfo() const{
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
        }

        ~Person(){
            delete []name;
            cout<<"called destructor!"<<endl;
        }
};

int main(){
    Person *parr[3];
    char namestr[100];
    char * strptr;
    int age;

    for(int i=0;i<3;i++){
        cout<<"name: ";
        cin >>namestr;
        cout<<"age: ";
        cin >> age;
        parr[i]= new Person(namestr, age);
    }

    parr[0]->showpersoninfo();
    parr[1]->showpersoninfo();
    parr[2]->showpersoninfo();

    return 0;
}