#include <iostream>
using namespace std;

class Person{
    public:
        void Sleep(){
            cout<<"sleep"<<endl;
        }
};

class Student :public Person{
    public:
        void Study(){
            cout<<"Study"<<endl;
        }
};

class PartTimeSTUDENT : public Student{
    public:
        void Work(){
            cout<<"Work"<<endl;
        }
};

int main(){
    Person *ptr=new Student();
    Person *ptr2=new PartTimeSTUDENT();
    Person *ptr3=new PartTimeSTUDENT();

    ptr->Sleep();
    ptr2->Sleep();
    ptr3->Sleep();
    delete ptr;
    delete ptr2;
    delete ptr3;
}