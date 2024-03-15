#include<iostream>
using namespace std;

int getPivot(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;

        }
        else
        {
        end = mid;
        }
     mid=start+(end-start)/2;
      

        
    }

    return start;
    


}

int binary_search(int arr[], int s,int  e ,int key)
{
   int start=s;
   int end=e-1;
   int mid=start+(end-start)/2;
   while(start<=end)
   {

     if(arr[mid]==key)
        {
            return mid;

        }
    if(arr[mid]>key)
    {
        end=mid-1;

    }
    else{
        start=mid+1;

    }
    mid=start+(end-start)/2;
   } 
   return -1;

}

int pivot_ele(int arr[],int n,int k){

    int pivot= getPivot(arr,n);
    if(k >= arr[pivot] && k<= arr[n-1])
    {// BS on second line
        return binary_search(arr,pivot,n-1, k);

    }
    else //BS on first line 
    {
        return binary_search(arr,0,pivot-1, k);
    }
}
int main(){
 
 int arr[5]={12,15,18,2,4};


cout<< pivot_ele(arr,5,2)<<endl;


// Above answer is approach no 1



 
   
  
return 0;
}
