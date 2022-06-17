#ifndef __CAR_H__
#define __CAR_H__

#include <iostream>
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

inline void car::ShowCarState(){
    cout<<"ID: " << gamerID<<endl;
    cout<<"Fuel: " << fuelGauge<<endl;
    cout<<"current speed" << curSpeed<<"km/s"<<endl<<endl;
}

inline void car::Break(){
    if(curSpeed<BRK_STEP){
        curSpeed=0;
        return;
    }

    curSpeed-=BRK_STEP;
}

#endif