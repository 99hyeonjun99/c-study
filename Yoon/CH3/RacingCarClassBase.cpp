#include <iostream>
#include <string.h>
using namespace std;


namespace CAR_CONST{
    enum{
        ID_LEN =20,
        MAX_SPD =200,
        FUEL_STEP =2,
        ACC_STEP =10,
        BRK_STEP =10
    };
}

using namespace CAR_CONST;

class car{
    private:
        char gamerID[ID_LEN];
        int fuelGauge;
        int curSpeed;
    public:
        void InitMembers(const char* ID, int fuel);
        void ShowCarState();
        void Accel();
        void Break();
};

void car::InitMembers(const char* ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge=fuel;
    curSpeed=0;

}

void car::ShowCarState(){
        cout<<"ID: " << gamerID<<endl;
        cout<<"Fuel: " << fuelGauge<<endl;
        cout<<"current speed" << curSpeed<<"km/s"<<endl<<endl;
    }

void car::Accel(){
        if(fuelGauge<=0)
            return;
        else    
            fuelGauge-=FUEL_STEP;
        
        if(curSpeed+ACC_STEP>=MAX_SPD){
            curSpeed=MAX_SPD;
            return;
        }

        curSpeed+=ACC_STEP;
    }

    void car::Break(){
        if(curSpeed<BRK_STEP){
            curSpeed=0;
            return;
        }

        curSpeed-=BRK_STEP;
    }

int main(){
    car run99;
    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}