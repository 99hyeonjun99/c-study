#include <iostream>
#include <cstring>
using namespace std;

class Computer{
    private:
        char owner[50];
    public:
        Computer(char *name){
            strcpy(owner, name);
        }

        void Calculate(){
            cout<<"calculating..."<<endl;
        }
};

class NotebookComp : public Computer{
    private:
        int Battery;
    public:
        NotebookComp(char *name, int initchag) :Computer(name), Battery(initchag){}
        
        void Charging(){
            Battery+=5;
        }

        void UseBattery(){
            Battery-=5;
        }

        void MovingCal(){
            if(GetBatteryInfo()<1){
                cout<<"charging require"<<endl;
                return;
            }
            cout<<"moving..";
            Calculate();
        }

        int GetBatteryInfo(){
            return Battery;
        }
};

class TableNotebook: public NotebookComp{
    private:
        char regstPenModel[59];
    public:
        TableNotebook(char* name, int initchag, char* pen) :NotebookComp(name, initchag){
            strcpy(regstPenModel, pen);
        }

        void write(char* penInfo){
            if(GetBatteryInfo()<1){
                cout<<"charging require"<<endl;
                return;
            }
            if(strcmp(regstPenModel, penInfo)!=0){
                cout<<"not regist pen";
                return;
            }
            cout<<"writing "<<endl;
            UseBattery();
        }
};

int main(){{
    NotebookComp NC("HJ", 5);
    TableNotebook tn("AH",5,"IES-241-241");
    NC.MovingCal();
    tn.write("IES-241-241");
    return 0;
}}