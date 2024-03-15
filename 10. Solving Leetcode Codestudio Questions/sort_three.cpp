#include<iostream>
using namespace std;

int sort_three(int arr[],int n)
{
    cout<<"okay"<<endl;
int i,j,k;
i=0;
k=n-1;
j=0;

while(i<=j<=k)
{
  
  if(arr[i]==0)
  {
    i++;
  }
  else if(arr[j]==1)
  {
 j++;
  }
   
  
  else if(arr[k]==2)
  {
    k--;
  }
  else if(arr[i]==1 && arr[j]==2 && arr[k]==0)
  {
   swap(arr[i],arr[k]);
   swap(arr[j],arr[k]);
   i++;
   j++;
   k--;

  }
   else if(arr[i]==2 && arr[j]==0 && arr[k]==1)
  {
   swap(arr[j],arr[i]);
   swap(arr[j],arr[k]);
   i++;
   j++;
   k--;

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
    int arr[9]={0,2,2,1,0,1,1,0};
    int n=9;

    sort_three(arr,n);

    print_array(arr,n);

return 0;
}
