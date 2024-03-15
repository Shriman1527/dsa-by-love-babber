#include<iostream>
using namespace std;

class Hero{
private:
int health;

public :
char *name;
char level;
 static int timeToComplete;


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


//static function
static int random(){
    return timeToComplete;


}
//Destructor 
~Hero(){
    cout<<"Destructor Bahi Called"<<endl;

}

};

int Hero :: timeToComplete = 5;

int main(){


cout<<Hero :: timeToComplete << endl;
cout<<Hero:: random()<<endl;


// Hero a;
// cout<< a.timeToComplete<< endl;

// Hero b;
// b.timeToComplete=10;

// cout<<a.timeToComplete<<endl;
// cout<<b.timeToComplete<<endl;


return 0;
}
