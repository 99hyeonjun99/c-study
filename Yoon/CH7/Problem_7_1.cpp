#include <iostream>
using namespace std;

class Car{
    private:
        int gasolineGauge;
    public:
        Car(int n): gasolineGauge(n){

        }

        int GetGasGauge(){
            return gasolineGauge;
        }
};

class HybridCar: public Car{
    private:
        int electricGauge;
    public:

        HybridCar(int gasolin, int electric): Car(gasolin), electricGauge(electric){}

        int GetElecGauge(){
            return electricGauge;
        }
};

class HybridWaterCar : public HybridCar{
    private:
        int waterGauge;
    public:
        HybridWaterCar(int gasolin, int electric, int water): HybridCar(gasolin, electric), waterGauge(water){}

        void ShowCurrentGauge(){
            cout<<"left Gasolin is: "<<GetGasGauge()<<endl;
            cout<<"left Electronic is: "<<GetElecGauge()<<endl;
            cout<<"left Water is: "<<waterGauge<<endl;
        }
};

int main(){
    HybridWaterCar prettycar(5,4,3);
    prettycar.ShowCurrentGauge();
}