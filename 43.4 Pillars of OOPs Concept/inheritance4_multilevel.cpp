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

//Multilevel Inheritance
class Dog: public Animal{

};

class GermanShepher : public Dog{

};
int main(){

GermanShepher g;
g.speak();



return 0;
}
