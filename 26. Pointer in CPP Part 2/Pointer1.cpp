#include<iostream>
using namespace std;

int main(){

int arr[10]={5,3,4,1,7};

// array name itself stores the first element address
// in the array
cout<< " Address of first memory block is :"<< arr << endl;

cout<< " first element value is  :"<< arr[0]<<endl;

cout<< " Address of first memory block is :"<< &arr[0] << endl;

cout<< " After using * with arr : "<< *arr << endl; // 5

cout<<  " After using *arr+1 :"<< *arr+1 << endl; //6

cout<<  " After using *(arr+1) :"<< *(arr+1) << endl; //3

cout<<  " After using (*arr)+1 :"<< (*arr)+1 << endl; // 6

cout<<  " After using (*arr)+1 :"<< *(arr+2) << endl; // 4

int i=3;
cout<< i[arr] <<endl; // 1






return 0;
}
