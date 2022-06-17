#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

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