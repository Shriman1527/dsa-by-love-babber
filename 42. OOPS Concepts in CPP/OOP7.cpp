#include<iostream>
#include<string.h>
using namespace std;
// Lets learn about the deep and shallow copy
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

};
int main(){

// Hero suresh(70,'C');
// suresh.print();


// // Copy Cons
// Hero R(suresh);
// R.print();

// R.health= suresh.health;
// R.level= suresh.level;

Hero hero1;
hero1.setHealth(12);
hero1.setLevel('D');
char name[]="Babbar";

hero1.setName(name);

hero1.print();

// Use default copy cons
Hero hero2(hero1);
// Hero hero2=hero1;
hero2.print();

hero1.name[0]='G';
hero1.print();
cout << endl;

hero2.print();

cout << endl << endl;

// copy assignment operator
cout<<"copy assign op :"<< endl;

hero1=hero2;
hero1.print();
cout << endl;

hero2.print();
return 0;
}
