#include<iostream>
using std::cout;
using std ::endl;

#include"Time.h"

//member function definition
void Time::printTime(){
    cout<<hour<<":" <<minute<<":" <<second;
}
//member of function definition
void Time::setTime(int hour, int minute, int second){
    this->hour=(hour >= 0 && hour <24)? hour :0;
    this->minute=(minute >= 0 && minute < 59)? minute :0;
    this->second=(second >= 0 && second < 59)? second:0;
}