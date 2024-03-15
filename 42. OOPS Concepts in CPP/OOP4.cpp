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
};

int main(){

// static allocation
Hero a;
a.setHealth(80);
a.setLevel('B');

cout << "health is " << a.health << endl;

cout << "level is "<< a.level << endl;


// Dynamic Allocation
Hero *b= new Hero;
b-> setLevel('A');
b-> setHealth(70);

// In dyanamic allocation to access the members 
// we use only the dereference op (*) or arrow op (->)

cout << "health is " << (*b).health << endl;
cout << "level is "<< (*b).level << endl;
// or use arrow
cout << "health is " << b->health << endl;
cout << "level is "<< b->level << endl;

return 0;
}
