#include <iostream>

namespace hybrid{
    void hybfunc(){
        std::cout<<"so simple function!"<<std::endl;
        std::cout<<"in namespace hybrid!"<<std::endl;
    }
}

int main(){
    using hybrid::hybfunc;
    hybfunc();
    return 0;
}