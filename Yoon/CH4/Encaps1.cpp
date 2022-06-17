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

class coldpatient{
    public:
        void takesinivelcap(const SinivelCap &cap) const {
            cap.Take();
        }
        
        void takesneezecap(const sneezecap &cap) const {
            cap.Take();
        }

        void takesnufflecapcap(const snufflecap &cap) const {
            cap.Take();
        }
};

int main(){
    SinivelCap scap;
    sneezecap zcap;
    snufflecap ncap;

    coldpatient sufferer;
    sufferer.takesinivelcap(scap);
    sufferer.takesneezecap(zcap);
    sufferer.takesnufflecapcap(ncap);
}