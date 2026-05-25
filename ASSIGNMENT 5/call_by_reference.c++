#include<iostream>
using namespace std;

void swap(int&num1, int&num2){
    int tmp=num1;
    num1=num2;
    num2=tmp;
}//end of swap
int main(void){
    int num1=10;
    int num2=20;

    swap(num1,num2);

    cout<<num1<<'\t'<<num2<<endl;
}//end of main