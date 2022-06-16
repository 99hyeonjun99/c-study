#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct car{
    char gamereID[ID_LEN];
    int fuelGauge;
    int curSpeed;
};

void ShowCarState(const car &car){
    cout<<"ID: " << car.gamereID<<endl;
    cout<<"Fuel: " << car.fuelGauge<<endl;
    cout<<"current speed" << car.curSpeed<<"km/s"<<endl<<endl;
}

void Accel(car &Car){
    if(Car.fuelGauge<=0)
        return;
    else    
        Car.fuelGauge-=FUEL_STEP;
    
    if(Car.curSpeed+ACC_STEP>=MAX_SPD){
        Car.curSpeed=MAX_SPD;
        return;
    }

    Car.curSpeed+=ACC_STEP;
}

void Break(car& Car){
    if(Car.curSpeed<BRK_STEP){
        Car.curSpeed=0;
        return;
    }

    Car.curSpeed-=BRK_STEP;
}

int main(){
    car run99={ "run99", 100, 0};
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Break(run99);
    ShowCarState(run99);

    car sped77={"sped88", 100, 0};
    Accel(sped77);
    Break(sped77);
    ShowCarState(sped77);
    return 0;
}