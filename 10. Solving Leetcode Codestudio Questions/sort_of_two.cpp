#include<iostream>
using namespace std;

int sort_two(int arr[],int n)
{
  int i=1,j=n-1;
  
  while(i<j)
  {
    if(arr[i]==0)
    {
        i++;
    }
    else if(arr[j]==1)
    {
        j--;
    }
    else 
    {
        swap(arr[i],arr[j]);
        i++;
        j--;

    }
  }
}

int print_array(int arr[],int n)
{
    int i;
   for(i=0;i<n;i++)
   {
    cout<<arr[i];
   }
}
int main(){

    int arr[7]={0,1,1,0,1,0,0};
    int n=7;

    sort_two(arr,n);

    print_array(arr,n);
   
return 0;
}
