#include<iostream>
using namespace std;

int main(){

int temp[10]={1,2,3};



cout<<"size od array is :"<< sizeof(temp) << endl; // 40
cout<< "size of first location val: "<< sizeof(*temp) << endl;
cout<< "size of second  location val: "<< sizeof*(temp+1) << endl;
cout<< " second  location val: "<< *(temp+1) << endl;
cout<< "size of pointer :"<< sizeof(&temp) << endl;

int *ptr = &temp[0];
cout<<" size of pointer is :" << sizeof(ptr) << endl;

// It gives size 4 bcoz it is int val and takes 4 bytes
cout<< sizeof(*ptr) << endl; // 4

cout << sizeof(&ptr) << endl;





return 0;
}
