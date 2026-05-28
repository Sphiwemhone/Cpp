#include<iostream>
using namespace std;

class Mid1{
    private:
    int number;

    public:
    Mid1(int num){
        number=num;
    }
    void Mid1_function(){
        cout<<"Mid1 number is "<<number<<endl;

    }

};
class Mid2{
    private:
    int number;

    public:
    Mid2(int num){
        number=num;
    }
    void Mid2_function(){
        cout<<"Mid2 number is "<<number<<endl;

    }
};

class Final: public Mid1, public Mid2{
    public:
    Final(int num1, int num2):Mid1(num1), Mid2(num2)
  {}  
};

int main(){
    Final final(1,2);
    final.Mid1_function();
    final.Mid2_function();
    return 0;
}