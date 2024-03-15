#include<iostream>
using namespace std;

class Hero{

private:
int health;

public :

char level;

// constructor
Hero(){
    cout<<"Constructor called"<< endl;
}

// Parameterized Constructor
Hero(int health){

    // cout<<"this ->"<<this << endl;

   this-> health = health;

}

Hero(int health , char level){

  this->level=level;

   this-> health = health;

}
void print(){
 cout<<level<<endl;
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

cout<<"Hi"<<endl;

// object created statically
Hero ramesh(10);
// cout<<"Address of Ramesh "<<&ramesh<<endl;


// ramesh.gethealth(); 
ramesh.print();

// cout<<"Hello"<<endl;

Hero *h= new Hero(11);

h->print();

Hero temp(11,'B');
temp.print();

return 0;
}
