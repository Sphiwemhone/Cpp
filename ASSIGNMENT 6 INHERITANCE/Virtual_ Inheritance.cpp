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
class Mid1:virtual public Base{
    public:
    Mid1(int num):Base(num){}
};

class Mid2:virtual public Base{
    public:
    Mid2(int num):Base(num){}
};

class Final:public Mid1,public Mid2{
    public:
    Final(int num1)
    :Base(num1),Mid1(num1),Mid2(num1){}
};

int main(){
    Final final(1);
    final.Base_function();
    return 0;
}