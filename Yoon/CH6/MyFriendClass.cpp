#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy{
    private:
        int height;
        friend class Girl;
    public:
        Boy(int len):height(len){

        }
        void ShowYourFriendInfo(Girl &frn);
};

class Girl{
    private:
        char phNum[20];
    public:
        Girl(char *num){
            strcpy(phNum,num);
        }
        void ShowYourFriendOnfo(Boy &frn);
        friend class Boy;
        
};

void Boy::ShowYourFriendInfo(Girl &frn){
            cout<<"Her phone number: "<<frn.phNum<<endl;
}

void Girl::ShowYourFriendOnfo(Boy &frn){
    cout<<"His height: "<<frn.height<<endl;
}

int main(){
    Boy boy(170);
    Girl girl("010-1234-5678");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendOnfo(boy);
    return 0;
}
