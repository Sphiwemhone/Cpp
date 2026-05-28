#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"constructor of base class "<<endl;
        }

        Base(int n){
            cout<<"constructor of base class "<<endl;
        }
};

class Derived : public Base{
    public:
        Derived(int n1){
            cout<<"constructor of derived class"<<endl;
        }

        Derived(int n1,int n2):Base(n1){
            cout<<"constructor of derived class "<<endl;
        }
};

int main(){

    Derived *ptr1 = new Derived(2);

    Derived *ptr2 = new Derived(1,2);

}