#include<iostream>
using namespace std;

int main(){

int i=5;
int *p=&i;
int **p2 = &p;

cout << endl << "sab sahi chal raha hai " << endl << endl;


cout <<"Printing P :"<< p <<endl;
cout<< " address of p :"<< &p <<endl;

cout << *p2 << endl;

// three methods to acess value of i

cout<< i <<endl;
cout<< *p << endl;
cout<< **p2 << endl;

// three methods to acess value of p

cout<< &i << endl;
cout << p << endl;
cout << *p2 << endl;


cout<< &p << endl;
cout << p2 << endl;



return 0;
}
