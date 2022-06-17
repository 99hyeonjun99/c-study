#include <cstring>
#include "Carinline.h"
using namespace std;

void car::InitMembers(const char* ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge=fuel;
    curSpeed=0;
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