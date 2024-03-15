#include<iostream>
using namespace std;

int main(){
// Difference Related About symbol table


int arr[10]={1,2,3,4};


// arr=arr+1;
// This thing gives us error. this is invalid.
// we cannot chnage the mapping of address

int *ptr = &arr[0];

cout << ptr << endl;
ptr=ptr+1;
cout << ptr << endl;
// This above thing does not give any error
// because we can change in the pointer i.e address store so
// it just move by bytes i.e to next location 



return 0;
}
