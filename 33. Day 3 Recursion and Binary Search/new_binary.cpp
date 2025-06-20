#include<iostream>
using namespace std;
bool binarySearch(int arr[], int key,int s, int e)
{

    if(s>e)
    {
        return 0;

    }
    int mid=s+e/2;
    if(arr[mid]==key)
    {
        return 1;
        
    }
   if(arr[mid]>key)
   {
    return binarySearch(arr,key,s,mid-1);
   }
   else{
    return binarySearch(arr,key,mid+1,e);
   }
    
}
int main(){

int arr[]={2,4,6,8,45,56};
int n=6;
int key=4;
bool ans= binarySearch(arr,key,0,n-1);
if(ans)
{
    cout<<"present"<<endl;
}
else
{
    cout<<"absent"<<endl;
}

return 0;
}
