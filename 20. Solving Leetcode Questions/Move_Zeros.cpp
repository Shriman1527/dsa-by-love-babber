#include<iostream>
using namespace std;

int move_zeros(int arr[],int n)
{
//    int i;
//    for(int i=0;i<n;i++)
//    {

//     for(int j=0;j<n;j++)
//     {

//      if(arr[j]!=0)
//      {
//         swap(arr[i],arr[j]);
      
//      }
//      else{
//         continue;
//      }
//    }
//     }
// above approach is wrong below is right

int i=0;
for(int j=0;j<n;j++)
{
    if(arr[j]!=0)
    {
        swap(arr[j],arr[i]);
        i++;

    }
}
    
}
int print(int arr[],int n)
{
    cout<<"The final array is :";
    for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}
int main(){

cout<<"enter the size of array :";
int n;
cin>>n;
int arr[n];
cout<<"Enter the array elements :";
for(int i=0;i<n;i++)
{
    cin>>arr[i];

}

move_zeros(arr,n);

print(arr,n);


return 0;
}
