#include<iostream>
using namespace std;

int triplet_sum(int arr[],int key)
{
    cout<<"okay okay"<<endl;
   int i,j,k;
   int n=6;

   for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n-1;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(arr[i]+arr[j]+arr[k]==key)
            {
                cout<<arr[i]<<arr[j]<<arr[k]<<endl;
            }
        }
    }
   }


}
int main(){

int arr[6]={1,2,3,4,5,6};
int key=8;

triplet_sum(arr,key);

return 0;
}
