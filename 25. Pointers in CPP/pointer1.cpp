#include<iostream>
using namespace std;

int main(){

int num=5;


cout<< num << endl;


// Address of Operator -> &

cout << "address of operator : " << &num <<endl;

int *ptr = &num;

// It gives us the address hold by ptr 
cout << " Address is : " << ptr <<endl;

// It gives us the value at address ptr
cout<< " Val is : "<< *ptr <<endl;

// size of both 
cout << " size of integer is "<< sizeof(num) << endl;
cout<< " size of pointer is "<< sizeof(ptr)<< endl;


double d= 4.2;

double *ptr2 = &d;

cout << "address of operator : " << &d <<endl;

cout << " Address is : " << ptr2 <<endl;

cout<< " Val is : "<< *ptr2 <<endl;

cout << " size of integer is "<< sizeof(d) << endl;
cout<< " size of pointer is "<< sizeof(ptr2)<< endl;




return 0;
}
