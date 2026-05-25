#include<iostream>
using namespace std;

int main(){
    int num = 10;
    int *ptr=&num;
    int &ref=num;
    int *&pref=ptr;

    cout<<num<<endl;
    cout<<ref<<endl;
    cout<<*ptr<<endl;
    cout<<*pref<<endl;

}//end of main