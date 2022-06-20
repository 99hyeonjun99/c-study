#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo{
    private:
        char *name;
        int age;
    public:
        MyFriendInfo(char* myname, int myage): age(myage){
            name=new char(strlen(myname)+1);
            strcpy(name, myname);
        }

        void ShowMyFriendInfo(){
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
        }
};

class MyFriendDetailInfo: public MyFriendInfo{
    private:
        char* addr;
        char* phone;
    public:
        MyFriendDetailInfo(char* myname, int myage, char* myaddr, char* myphone): MyFriendInfo(myname, myage){
            addr=new char(strlen(myaddr)+1);
            strcpy(addr, myaddr);
            phone=new char(strlen(myphone)+1);
            strcpy(phone,myphone);
        }

        void ShowMyFriendDetailInfo(){
            ShowMyFriendInfo();
            cout<<"address: "<<addr<<endl;
            cout<<"phone: "<<phone<<endl;
        }
};

int main(){
    MyFriendDetailInfo hj("hj", 23, "Seoul", "010-1234-5678");
    hj.ShowMyFriendDetailInfo();
    return 0;

}