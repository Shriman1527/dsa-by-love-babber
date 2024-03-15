#include<iostream>
using namespace std;

class hero{

// Lets learn about the access  mnodifiers 
public :
// properties 
int health;
char level;

};
int main(){

hero Ramesh;

Ramesh.health=70;
Ramesh.level='A';

cout<<"health is "<<Ramesh.health<<endl;
cout<<"level is "<<Ramesh.level<<endl;


return 0;
}
