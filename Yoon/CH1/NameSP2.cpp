#include <iostream>

namespace bestcomimpl{
    void simplefunc();
}

namespace progcomimpl{
    void simplefunc();
}

int main(){
    bestcomimpl::simplefunc();
    progcomimpl::simplefunc();
    return 0;
}

void bestcomimpl::simplefunc(){
        std::cout<<"bestcom named function"<<std::endl;
}

void progcomimpl::simplefunc(){
    std::cout<<"progcom named function"<<std::endl;
}