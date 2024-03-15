#include<iostream>
using namespace std;

int get_sum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        

    }
    return sum;
}
int main(){

// char ch= 'q';
// cout <<" size of statis var: " <<sizeof(ch)<< endl;//1

// char*c =&ch;
// cout << " size of pointer :"<< sizeof(c)<< endl;//4

// int *arr = new int[5];

int n;
cout<<"Enter the size of array :";

cin>> n;

// Variable Size Array Creation
int *arr= new int [n];

// Taking input in array
for(int i=0;i<n;i++)
{
    cin>> arr[i];

}

int ans = get_sum(arr,n);
cout <<"ans is :"<< ans << endl;



return 0;
}
