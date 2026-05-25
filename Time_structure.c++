#include<iostream>
using namespace std;
//structure definition
struct Time{
    int hour;//0-23
    int minute;//0-59
    int second;//0-59

};
//funcion definition
void printTime(Time t){
    cout<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;

}
int main(){
    Time lunchTime;
    Time dinnerTime={18,30,0};
    Time *ptrTime=&lunchTime;
    
    lunchTime.hour=12;
    ptrTime->minute=30;
    (*ptrTime).second=20;

    cout<<"Lunch will be held at ";
    printTime(lunchTime);

    cout<<"dinner will be held at ";
    printTime(dinnerTime);
}