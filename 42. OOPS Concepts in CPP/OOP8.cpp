#include<iostream>
#include<string.h>
using namespace std;
// Copy Assignment Operator
// destructor

class Hero{
public:
char *name;

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

void setName(char name[])
{
    strcpy( this-> name,name);

}

void print(){
    cout<< endl;
    cout<< "name :" << this-> name << endl;

    cout << "health :" << this->health<< endl;
    cout << "level :" << this ->level << endl;
   cout << endl;

}

Hero()
{
   cout << " default cons called" << endl;
    name = new char [100];

}

// copy cons
// this is call by reference

// in a shallow copy , we make entirely diff.
//array so changes not takes place like 
// in case of deep copy

Hero(Hero& temp){
    cout << "copy cons called" << endl;
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this -> name = ch;

    this-> health = temp.health;
    this-> level = temp.level;

}

Hero (int health , char level)
{

this -> level = level;

this->  health=health;

}

// destructor
~Hero(){
    cout << " Destructor bhai called" << endl;

}

};
int main(){
// static -> destructor automatically called
Hero a;

// dynamic -> destructor not called automatically
Hero *b = new Hero();

// called manualy
delete b;

return 0;
}
