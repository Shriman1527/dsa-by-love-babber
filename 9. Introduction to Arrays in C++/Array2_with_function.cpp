#include<iostream>
using namespace std;


void print_array(int arr[], int size)
{
    // printing the array
   for(int i=0;i<size;i++)
{
cout<<arr[i]<<" ";
} 
cout<<endl;
}


int main(){
int first[15]={2,5,7,9};
int n=15;
print_array(first,15);

n=10;
int second[10]={0};
print_array(second,n);
return 0;
}

