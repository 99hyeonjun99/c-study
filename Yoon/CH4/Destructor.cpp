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
    Person man1("Lee dong woo", 29);
    Person man2("Jang dong gun", 41);
    man1.showpersoninfo();
    man2.showpersoninfo();

    return 0;
}