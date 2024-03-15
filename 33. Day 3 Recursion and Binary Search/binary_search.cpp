#include<iostream>
using namespace std;

void print(int arr[],int s,int e)
{cout<<endl;

    for(int i=s;i<e;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<< endl;

}
bool binarySearch(int arr[],int s,int e, int k)
{
    print(arr,s,e);

    //base case
    if(s>e)
    {
        return -1;
    }
int mid= s+(e-s)/2;
    //element found
    if(arr[mid]==k)
    return true;



  if(arr[mid]<k)
  {
    binarySearch(arr,mid+1,e,k);

  }
  else
  {
    return binarySearch(arr,s,mid-1,k);

  }
}
int main(){

int arr[6]={2,4,6,10,14,16};
int size=6;
int key =14;

bool ans = binarySearch(arr,0,5,14);
if(ans)
cout<< "present" << endl;
else
cout<<"notpresent"<< endl;

return 0;
}
