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
    cout << "health" << this->health<< endl;
    cout << "level" << this ->level << endl;

}

Hero()
{
   cout << " default cons called" << endl;

}

// copy cons
// this is call by reference
Hero(Hero& temp){
    cout << "copy cons called" << endl;
    
    this-> health = temp.health;
    this-> level = temp.level;

}

Hero (int health , char level)
{

this -> level = level;

this->  health=health;

}

};
int main(){

Hero suresh(70,'C');
suresh.print();


// Copy Cons
Hero R(suresh);
R.print();

// R.health= suresh.health;
// R.level= suresh.level;


return 0;
}
