#include<iostream>
#include<string.h>
using namespace std;
//Copy Constructor


class Hero{
private:
int health;

public :
char * name;

char level;
Hero(){
    cout<<"Simple Constructor Called"<<endl;
    name= new char[100];

}
void print(){
    cout<<endl;
cout<<"Name"<<this->name << endl;
cout<<"health "<<this->health<<endl;
cout<<"level"<<this->level;
cout<<endl;


}

// Parameterized Constructor
Hero(int health , char level){

  this->level=level;

   this-> health = health;

}
//Copy Constructor
//pass by reference


// For Deep Copy Constructor 
Hero(Hero &temp){
    cout<<"copy constructor called"<<endl;
    char *ch= new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
    this->health=temp.health;
    this->level=temp.level;

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

void setName(char name[] )
{
    strcpy(this-> name , name);

}
};

int main(){

// Hero suresh(70,'C');
// suresh.print();
// cout<<endl;

// // copy constructor 
// Hero ritesh(suresh);
// ritesh.print();

Hero hero1;
hero1.sethealth(12);
hero1.setlevel('D');

char name[7]="Babbar";
hero1.setName( name);

// hero1.print();


// use default copy constructor 
// Hero hero2(hero1);

// or
Hero hero2=hero1;
// hero2.print();

hero1.name[0]='G';
hero1.print();

// This is also Gabbar 
hero2.print();

// Copy assignment operator which copies second dat into the first data 
hero1=hero2;
hero1.print();
// hero2.print();


















return 0;
}
