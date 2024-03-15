#include<iostream>
using namespace std;

int reverse(int arr[],int n)
{
  int start=0;
  int end=n-1;
  while(start<end)
  {
    swap(arr[start],arr[end]);
    start++;
    end--;

  }
}

int print(int arr[],int n)
{
    cout<<endl;

    cout<<"reverse array is :";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}
int main(){

cout<<"Enter the Size of array :";
int n;
cin>>n;
int arr[n];
cout<<"Enter the array elements";
for(int i=0;i<n;i++)
{
    cin>>arr[i];

}

reverse(arr,n);
print(arr,n);

return 0;
}
