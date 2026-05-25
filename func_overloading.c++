#include<iostream>
void adder(int a, int b){
    std::cout<<a+b<<std::endl;
} //end of adder

void adder(int a, int b, int c){
    std::cout<<a+b+c<<std::endl;
}//end of adder

int main (){
    adder(5,10);
    adder(5,10,20);

}//end of main