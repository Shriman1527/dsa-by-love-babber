#include<iostream>
using namespace std;

class Hero{
private:
int health;

public :

char level;

void print(){

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






};
int main(){

// Static Allocation of Object
    Hero a;

a.sethealth(10);
a.level='B';

cout<<"Health of a is "<< a.gethealth()<<endl;
cout<<"Level of a is "<<a.level<<endl;

//Dynamic Allocation of Object
    Hero * b = new Hero;



b->sethealth(70);
b->level='C';



// We can use both dereferencing operator(*) and 
// arrow operator (->) to set and also accesss the members

cout<<"Health of a is "<< (*b).gethealth()<<endl;
cout<<"Level of a is "<<(*b).level<<endl;

cout<<"Health of a is "<< b->gethealth()<<endl;
cout<<"Level of a is "<<b->level<<endl;





return 0;
}
