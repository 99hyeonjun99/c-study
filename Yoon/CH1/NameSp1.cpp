#include <iostream>

namespace bestcomimpl{
    void simplefunc(){
        std::cout<<"bestcom named function"<<std::endl;
    }
}

namespace progcomimpl{
    
}

int main(){
    bestcomimpl::simplefunc();
    progcomimpl::simplefunc();
}