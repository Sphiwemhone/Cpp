#include<iostream>
using std::cout;
using std::endl;

#include "Time.h"

int main(){
    Time lunchTime;
    Time dinnerTime;

lunchTime.setTime(12,30,20);
dinnerTime.setTime(30,70,80);

cout<<"lunch will be held at ";
lunchTime.printTime();
cout << endl;

cout<<"dinner will be held at ";
dinnerTime.printTime();
cout<< endl;

}