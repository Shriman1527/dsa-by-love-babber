#include<iostream>
using namespace std;

class hero{

// Lets learn about the access  mnodifiers 
private:
int health;

public :
char level;

void print(){
    cout<<level << endl;

}

int gethealth(){
 return health;
}

char getlevel(){
 return level;

}

void sethealth(int h ){
  
    health=h;


}
void setlevel(char ch)
{
    level=ch;

}


};
int main(){

hero Ramesh;

cout<<"Size of Ramesh is "<<sizeof(Ramesh)<<endl;

cout<<"Ramesh health is "<<Ramesh.gethealth()<<endl;

// Ramesh.health=70;

Ramesh.sethealth(70);

Ramesh.level='A';

cout<<"health is "<<Ramesh.gethealth()<<endl;
cout<<"level is "<<Ramesh.level<<endl;


return 0;
}