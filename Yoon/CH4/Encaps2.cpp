#include <iostream>
using namespace std;

class SinivelCap{
    public:
        void Take() const{
            cout<<"get over runny nose"<<endl;
        }
};

class sneezecap{
    public:
        void Take() const{
            cout<<"get over sneeze"<<endl;
        }
};

class snufflecap{
    public:
    void Take() const{
        cout<<"get over snufflecap"<<endl;
    }
};

class CONTAC600{
    private:
        SinivelCap sin;
        sneezecap sne;
        snufflecap snu;
    public:
        void Take() const{
            sin.Take();
            sne.Take();
            snu.Take();
        }
};

class ColdPatient{
    public:
        void TakeCONTAC600(const CONTAC600 &CAP) const{
            CAP.Take();
        }
};

int main(){
    CONTAC600 cap;
    ColdPatient sufferer;
    sufferer.TakeCONTAC600(cap);
    return 0;
}