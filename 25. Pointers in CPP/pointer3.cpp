#include<iostream>
using namespace std;

int main(){

// pointer to int is created and pointing to
// some garbage address 
//  int *p ;

//  cout<< *p <<endl;

// int i=5;
// // int *p = &i;
// int *q= &i;
// cout<< q << endl;
// cout << *q <<endl;

// int *p=0;
// // this is second menthod to initialize
// p=&i;

// cout<< p << endl;
// cout << *p <<endl;


int num=5;
int a=num;
cout << " a before" << num << endl;
a++;
cout << "a after " << num <<endl;

cout << num << endl;


int *p = &num;
cout << "before" << num << endl;

(*p)++;
cout << "after " << num <<endl;

// copyling a pointer 
int *q = p;

cout<< p << "_" << q << endl;
cout << *p << "_" << *q << endl;


// important concept
int i=3;
int *t = &i;

// cout<< (*t)++ <<endl; op-> 3

// pointer arithmetic
*t= *t+1;
cout<< *t <<endl;  // op-> 4


cout << "before t" << t <<endl;
 t=t+1;
 // if we apply like above then address shifts next 
//  location of integer that is 4 byte next 
 cout << " after t" << t << endl;






 







return 0;
}
