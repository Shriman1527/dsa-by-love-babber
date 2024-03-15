#include<iostream>
using namespace std;

int main(){
// Difference Related about & operator



int a[20]={1,2,3,4};

cout<< "->" << &a[0]<<endl;
cout<< &a << endl;
cout<< a << endl;

// This above three things pointing to the same thing 
// address location i.e the first location address

int *p = & a[0];
cout << p << endl;
cout << *p << endl;
cout <<"->" << &p << endl;

return 0;
}
