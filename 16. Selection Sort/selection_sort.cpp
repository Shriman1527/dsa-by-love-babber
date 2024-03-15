#include<iostream>
using namespace std;

void selection_sort(int a[],int n)
{
    int minIndex,i,j;
    for(i=0;i<n-1;i++)
    {
    minIndex=i;
    for(j=i+1;j<n;j++)
    {
        if(a[minIndex]>a[j])
        minIndex=j;

    }
    swap(a[minIndex],a[i]);

    }
    

}

void print_array(int a[],int n)
{
    cout<<"The Selection Sorted Array is : ";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
int main(){
    int n;

    cout<<"Enter the No of elements :";
    cin>>n;
    int a[n];
    cout<<"Enter the Elements in the array :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    selection_sort(a,n);
    print_array(a,n);
return 0;
}
