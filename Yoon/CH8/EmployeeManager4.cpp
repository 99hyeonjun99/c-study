#include <iostream>
#include <cstring>
using namespace std; 

class Employee{
    private:
        char name[100];
    public:
        Employee(char* name){
            strcpy(this->name, name);
        }

        void ShowYourName() const{
            cout<<"name: "<<name<<endl;
        }

        virtual int GetPay() const{
            return 0;
        }

        virtual void ShowSalaryInfo() const{
            
        }
};

class PermanentWorker: public Employee{
    private:
        int salary;
    public:
        PermanentWorker(char* name, int money) :salary(money), Employee(name){
        }

        int GetPay() const{
            return salary;
        }

        void ShowSalaryInfo() const{
            ShowYourName();
            cout<<"salary: "<<GetPay()<<endl<<endl;
        }
};

class TemporaryWorker: public Employee{
    private:
        int workTime;
        int payPerHour;
    public:
        TemporaryWorker(char* name, int pay): Employee(name), workTime(0), payPerHour(pay){
        }
        void addWorkTime(int time){
            workTime+=time;
        }
        int GetPay() const{
            return workTime*payPerHour;
        }
        void ShowSalaryInfo() const{
            ShowYourName();
            cout<<"salary: "<<GetPay()<<endl<<endl;
        }
};

class SalesWorker: public PermanentWorker{
    private:
        int salesResult;
        double bonusRatio;
    public:
        SalesWorker(char* name, int money, double ratio):PermanentWorker(name, money), salesResult(0), bonusRatio(ratio){
        }
        void AddSalesResult(int value){
            salesResult+=value;
        }
        int GetPay() const{
            return PermanentWorker::GetPay() +(int)(salesResult*bonusRatio);
        }
        void ShowSalaryInfo() const{
            ShowYourName();
            cout<<"Salary: "<<GetPay()<<endl<<endl;
        }
};

class EmployeeHandler{
    private:
        Employee* empList[50];
        int empNum;
    public:
        EmployeeHandler(): empNum(0){
        }

        void AddEmployee(Employee* emp){
            empList[empNum++]=emp;
        }

        void ShowAllSalaryInfo() const{
            
            for(int i=0;i<empNum;i++){
                empList[i]->ShowSalaryInfo();
            }
            
        }

        void ShowTotalSalary() const{
            int sum=0;
            
            for(int i=0;i<empNum;i++){
                sum+=empList[i]->GetPay();
            }
            
            cout<<"Salary Sum: "<<sum<<endl;
        }

        ~EmployeeHandler(){
            for(int i=0;i<empNum;i++){
                delete empList[i];
            }
        }
};

int main(){
    EmployeeHandler handler;

    handler.AddEmployee(new PermanentWorker("Kim", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    
    TemporaryWorker* alba=new TemporaryWorker("Jung", 700);
    alba->addWorkTime(5);
    handler.AddEmployee(alba);

    SalesWorker *seller=new SalesWorker("Hong", 1000, 0.1);
    seller->AddSalesResult(7000);
    handler.AddEmployee(seller);

    handler.ShowAllSalaryInfo();

    handler.ShowTotalSalary();

    return 0;
}