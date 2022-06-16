#include <iostream>

namespace bestcomimpl{
    void simplefunc();
}

namespace bestcomimpl{
    void prettyfunc();
}


namespace progcomimpl{
    void simplefunc();
}

int main(){
    bestcomimpl::simplefunc();
    return 0;
}

void bestcomimpl::simplefunc(){
        std::cout<<"bestcom named function"<<std::endl;
        prettyfunc();
        progcomimpl::simplefunc();
}

void bestcomimpl::prettyfunc(){
    std::cout<<"So pretty!!"<<std::endl;
}

void progcomimpl::simplefunc(){
    std::cout<<"progcom named function"<<std::endl;
}