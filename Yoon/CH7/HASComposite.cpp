#include <iostream>
#include <cstring>
using namespace std;

class Gun{
    private:
        int bullet;
    public:
        Gun(int bnum) :bullet(bnum){}

        void Shut(){
            cout<<"Bang!"<<endl;
            bullet--;
        }
};

class Police{
    private:
        int handcuffs;
        Gun* pistol;
    public:
        Police(int bnum, int cuff): handcuffs(cuff){
            if(bnum>0)
                pistol=new Gun(bnum);
            else
                pistol=NULL;
        }

        void PutHandcuff(){
            cout<<"SNAP!"<<endl;
            handcuffs--;
        }

        void shut(){
            if(pistol==NULL)
                cout<<"Hut BBANG!"<<endl;
            else
                pistol->Shut();
            
        }
};

int main(){
    Police pman(5,3);
    pman.shut();
    pman.PutHandcuff();

    Police pman2(0,3);
    pman2.shut();
    pman2.PutHandcuff();
    return 0;
}