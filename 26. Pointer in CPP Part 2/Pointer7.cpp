#include<iostream>
using namespace std;

int get_sum(int arr[],int n)
{
    // both will be treat as same 
    // int arr[] and int *arr

    cout <<endl<<"size "<< sizeof(arr)<< endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

    }
    return sum;

}
int main(){

int arr[6]={1,2,3,4,5,8};

cout<< "sum is :" << get_sum(arr,5) << endl;


// this below thing shows that benefit pf passing array as 
// pointer i.e we can send part of array to the function
cout<< "sum is :" << get_sum(arr+3,3) << endl;

return 0;
}
