#include<iostream>
using namespace std;


int main(){

//     // Homework :
//  int arr[5];
//  int val=1;

// for(int i=0;i<5;i++)
// {
//   arr[i]=val;

// }
// for(int i=0;i<5;i++)
// {
//  printf("%d",arr[i]);
  
// }


// Declaration of Array :
int number[15];

// Accesing the Elements:
cout<<"Value at index 3"<<number[3]<<endl;

cout<<"Value at index 3"<<number[20]<<endl;

// Initialize an Array : 

int second[3]={5,7,11};

// Accesing the elements :
cout<<"Value at 2 Index is "<<second[2]<<endl;


int third[15]={2,7};
int n=15;
cout<<"Printing the array :-"<<endl;

// Print the array :
for(int i=0;i<n;i++)
{
cout<<third[i]<<" ";
}


// Initializing all elements with zero :
int fourth [10]={0};
 n=10;
cout<<"Printing the array :-"<<endl;

// Print the array :
for(int i=0;i<n;i++)
{
cout<<fourth[i]<<" ";
}

cout<<endl<<"Everything is Fine"<<endl;
return 0;
}
