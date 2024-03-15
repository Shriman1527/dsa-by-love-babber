#include<iostream>
using namespace std;

class Hero{

public:
int health;
char level;

int  getHealth()
{
    return health;
}

char getLevel()
{
    return level;

}
void setHealth(int h)
{
    health=h;

}

void setLevel(char ch)
{
    level=ch;

}

void print(){
    cout << level << endl;

}
// constructor
Hero(){
cout <<" Constructor Called" << endl;

}

// parameterize cons
Hero (int health)
{
 cout << "this ->" << this << endl;

  this->  health=health;

}
// mutiple para
Hero (int health , char level)
{

this -> level = level;

this->  health=health;

}
};
int main(){

// cout << "hi" << endl;

// object craeted statically
Hero ramesh(10);
// cout << "address of ramesh : " << &ramesh << endl;

ramesh.print();
// cout << "Hello" << endl;


// dynamically
Hero *h= new Hero(11);
//or
// Hero *h= new Hero();
h-> print();
Hero temp(70,'B');
temp.print();


return 0;
}
