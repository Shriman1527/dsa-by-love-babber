#include<iostream>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"Inside function 1"<<endl;

    }

};

class B : public A{
    public:
    void fun2(){
        cout<<"Inside Function 2"<<endl;

    }
};

class C : public A{
    public:
    void fun3(){
        cout<<"inside Function 3"<<endl;

    }
};
int main(){

A object1;
object1.fun1();
cout<<endl;

B object2;
object2.fun1();
object2.fun2();

cout<<endl;

C object3;
object3.fun1();
object3.fun3();


return 0;
}
