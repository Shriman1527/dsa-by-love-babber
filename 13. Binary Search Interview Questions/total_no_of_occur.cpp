#include<iostream>
using namespace std;

int first_occ(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]== key)
        {
            ans=mid;
            end=mid-1;


        }
        else if(key>arr[mid])
        {
// if we want to come at right
         start=mid+1;

        }
        else if(key<arr[mid])
        {
 // if we want to come at left
           end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}

int last_occ(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]== key)
        {
            ans=mid;
            // This is only change between first and last
            start=mid+1;


        }
        else if(key>arr[mid])
        {
// if we want to come at right
         start=mid+1;

        }
        else if(key<arr[mid])
        {
 // if we want to come at left
           end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
int main(){

// int even[5]={1,2,3,3,5};
int even[11]={1,2,3,3,3,3,3,3,3,3,5};

// cout<< "First Occurence of 3 is at index "<< first_occ(even,5,3) <<endl;
cout<< "First Occurence of 3 is at index "<< first_occ(even,11,3) <<endl;

// cout<< "last Occurence of 3 is at index "<< last_occ(even,5,3) <<endl;
cout<< "last Occurence of 3 is at index "<< last_occ(even,11,3) <<endl;

// This is the formula to find the no of occurence 
cout<<"The no of Occurence :" << (last_occ(even,11,3)- first_occ(even,11,3))+1<<endl;
return 0;
}
