#include<iostream>
using namespace std;

int insertion(int arr[],int n)
{
int i,j;
  
  for(i=1;i<n;i++)
  {
     int temp=arr[i];
    for(j=i-1;j>=0;j--)
    {
        if(arr[j]>temp)
        {
            //shift
            arr[j+1]=arr[j];

        }
        else
        {
            //ruk jao
            break;

        }
    }
    arr[j+1]=temp;
  }
}

int print(int arr[],int n)
{
    cout<<"Sorted array is";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
   cout<<"Enter the No of elements :";
   int n;
   cin>>n;
   int arr[n];
   cout<<"Enter the elements";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];

   }

insertion(arr,n);

print(arr,n);

return 0;
}
