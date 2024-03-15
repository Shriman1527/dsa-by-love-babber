#include<iostream>
using namespace std;


//Destructor
class Hero{
private:
int health;

public :

char level;

void print(){

}
Hero(){
    cout<<"Constructor called"<<endl;

}

int gethealth(){
    return health;
}

char getlevel(){
    return level;

}

void sethealth(int h){
    health=h;

}
void setlevel(char ch){
    level=ch;

}

//Destructor 
~Hero(){
    cout<<"Destructor Bahi Called"<<endl;

}

};

int main(){
// static
Hero a;

//Dynamic

// In case od Dynamic , we have to called destructor manually

Hero *b = new Hero();

delete b;


return 0;
}
