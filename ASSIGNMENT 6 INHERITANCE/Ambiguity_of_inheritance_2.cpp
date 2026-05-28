#include<iostream>
using namespace std;

class Base{
    private:
    int number;

    public:
    Base(int num){
        number=num;
    }
    void Base_function(){
        cout<<"Base number is "<<number<<endl;
    }

};
class Mid1: public Base{
    public:
    Mid1(int num):Base(num){}
};
class Mid2: public Base{
    public:
    Mid2(int num):Base(num){}
};
class Final: public Mid1, public Mid2{
    public:
    Final(int num1,int num2):Mid1(num1),Mid2(num2){}
};

int main(){
    Final final(1,2);
    final.Mid1::Base_function();
    final.Mid2::Base_function();
    return 0;
}