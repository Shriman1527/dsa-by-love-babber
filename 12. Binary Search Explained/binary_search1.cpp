#include<iostream>
using namespace std;

int binary_search(int arr[],int size , int key)
{
    int start=0;
    int end=size-1;
   
    // int mid=(start+end)/2;
    // For start and end addition to stay between the range , 
    // we use the following formula.

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;

        }
        // Go to right part of array
        if(key > arr[mid])
        {
            start=mid+1;
        }
        else //Key is less than arr[mid] then search in left part
        {
            end=mid-1;

        }
     //There is updation of start or end then update mid also
        // mid=(start+end)/2;

        mid=start+(end-start)/2;
    }

    // If key not found in program then return -1
    return -1;

}
int main(){

  int even[6]={2,4,6,8,12,18};
  int odd[5]={3,8,11,14,16};

  int evenindex= binary_search(even,6,12);

  cout<<"Index of 12 is " << evenindex <<endl;

   int oddindex= binary_search(odd,5,8);

  cout<<"Index of 8 is " << oddindex <<endl;

return 0;
}
