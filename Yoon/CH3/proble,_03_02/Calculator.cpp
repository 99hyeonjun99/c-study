#include <iostream>
#include "Calculator.h"
using namespace std;

void Calculator::Init(){
    cnt=0;
}

void Calculator::show_cnt(){
    cout<<cnt;
}

float Calculator::Add(float a, float b){
    cnt++;
    return a+b;
}

float Calculator::Sub(float a, float b){
    cnt++;
    return a-b;
}

float Calculator::Mul(float a, float b){
    cnt++;
    return a*b;
}

float Calculator::Div(float a, float b){
    cnt++;
    return a/b;
}