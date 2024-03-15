#include<iostream>
using namespace std;

int main(){

char name[20];

// Taking string as a input
// cout<<"enter your name :";
// cin>> name;

// // Output a string
// cout<<"Your name is ";
// cout<<name;

// cout<<endl;

// cout<<"enter your name :";
// cin>> name;
// cout<<"Your name is ";
// cout<<name;

cout<<"Enter your name :";

cin>>name;
name[2]='\0';
// In this case only two characters prints because 
// we use null after that so print till null character 
// encountered.
cout<<"Your name is ";
cout<<name;






return 0;
}
