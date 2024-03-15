#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    // base case
    if(n==0 || n==1)
    {
        return ;
    }

// 1 case solve
// this keeps the largest element at the end of the array 
    for(int i=0;i<n-1;i++)
    {
      if(arr[i]>arr[i+1])
      {
        swap(arr[i],arr[i+1]);

      }  
    }

// Recursive Call 
bubble_sort(arr ,n-1);

    
}

void print_array(int *arr, int n)
{
    cout << " The sorted array is :"<< endl;

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";

    }
}
int main(){
int arr[5]={2,5,1,6,9};

bubble_sort(arr,5);

print_array(arr,5);

return 0;
}
