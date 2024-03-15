#include<iostream>
using namespace std;
void print_array(int arr[] , int n)
{
    cout << " merge sorted array is " << endl;

    for(int i=0 ;i<n ;i++)
    {
        cout << arr[i] <<" ";

    }
}

void merge(int arr[], int start , int end)
{
int mid = (start+end)/2;

int len1= mid -start+1;
int len2= end - mid;

int *first = new int [len1];

int *second = new int [len2];

int mainArrayIndex = start;

for ( int i=0 ; i<len1; i++)
{
    first[i]= arr[mainArrayIndex++];

}
 mainArrayIndex = mid+1;

for ( int i=0 ; i<len2; i++)
{
    second[i]= arr[mainArrayIndex++];
    
}

// merge 2 sorted arrays 
// following is the concept of merge 2 sorted arrays concept 
int index1=0;
int index2 =0;
mainArrayIndex = start ;

while ( index1 < len1 && index2 < len2)
{
    if(first[index1]< second[index2])
    {
        arr[mainArrayIndex++] = first[index1++];

    }
    else
    {
        arr[mainArrayIndex++] = second[index2++] ;

    }
}

while(index1 < len1)
{
     arr[mainArrayIndex++] = first[index1++];

}

while(index2< len2){
     arr[mainArrayIndex++] = second[index2++];
}



// we are given the memory to first and second 
// array dynamically so we want to delete it manually 

delete []first;
delete []second;



}
void merge_sort(int arr[], int start , int end)
{


int mid = (start+end)/2;
// int mid = start + (end - start)/2;

// base case 
if(start>=end)
{
    return ;
}

//left part sort
merge_sort(arr,start,mid);

// right part sort 
merge_sort(arr , mid +1, end);


// merge sort 
merge(arr , start , end );


}
int main(){
int arr[5]={2,5,7,4,1};

int n=5;
merge_sort(arr,0,n-1);

print_array(arr , n);

return 0;
}
