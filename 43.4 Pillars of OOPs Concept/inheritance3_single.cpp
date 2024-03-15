#include<iostream>
using namespace std;
//Types of Inheritance 

class Animal{
public:
int age;
int weight;

public:
void speak(){
    cout<<"speaking"<<endl;

}
};

class Dog: public Animal{

};
int main(){

Dog b;
b.speak();
cout<<b.age<<endl;


return 0;
}
