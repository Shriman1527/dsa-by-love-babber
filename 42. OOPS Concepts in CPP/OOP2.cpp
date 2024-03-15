#include<iostream>
using namespace std;

class Hero{
//properties
// public:
// // the all property write below the public become public 
// int health;
// char level;

// private:
// // We can access only these within this block
// int health;
// char level;

// void print(){
//     cout << level << endl;

// Getter and setters concept:

private:
int health;

public:
char level;

int getHealth(){
    return health;

}

char getLevel(){
return level;

}

void setHealth(int h){
    health=h;

}

void setLevel(char ch){
    level=ch;

}

};

int main(){

// Creating a Object
Hero Ramesh;

cout << "size of Ramesh is :" <<sizeof(Ramesh) << endl;


// Ramesh.health=70;
Ramesh.level='A';


// cout << "Health is :" << Ramesh.health << endl;
// cout << "Level is :" << Ramesh.level << endl;
Ramesh.setHealth(70);

cout<< "Ramesh Health is :" << Ramesh.getHealth()<< endl;


cout << "Health is :" << Ramesh.getHealth() << endl;
return 0;
}
