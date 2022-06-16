#include <iostream>

int boxvolume(int length, int width=1, int height=1);

int main(){
    std::cout<<"[3,3,3] : "<<boxvolume(3,3,3)<<std::endl;
    std::cout<<"[5,5,D] : "<<boxvolume(5,5)<<std::endl;
    std::cout<<"[7,D,D] : "<<boxvolume(7)<<std::endl;
    //std::cout<<"[D,D,D] : "<<boxvolume()<<std::endl;
}

int boxvolume(int length, int width, int height){
    return length*width*height;
}