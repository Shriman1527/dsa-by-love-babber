#include<iostream>
using namespace std;


void selection_sort(int arr[], int n ,int index=0)
{
  
  if(index==n-1)
  return ;

int minIndex=index;
for(int i=index+1;i<n;i++)
{
    if(arr[minIndex]> arr[i])
    minIndex=i;

}
swap(arr[minIndex],arr[index]);

selection_sort(arr,n,index+1);



 
}
void print_array(int arr[], int n)
{
for(int i=0;i<n;i++)
{
    cout << arr[i] <<"  ";
}
}
int main(){

int arr[5]={4,7,2,49,1};

selection_sort(arr,5);

print_array(arr,5);

return 0;
}
