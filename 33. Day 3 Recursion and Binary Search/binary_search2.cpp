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
cout<< " value of arr mid is :"<< arr[mid]<< endl;

    //element found
    if(arr[mid]==k)
    return true;



  if(arr[mid]<k)
  {
  return   binarySearch(arr,mid+1,e,k);

  }
  else
  {
    return binarySearch(arr,s,mid-1,k);

  }
}
int main(){

int arr[]={2,4,6,10,14,16,18,22,49,55,222};
int size=11;
int key =222;

bool ans = binarySearch(arr,0,size,key);
if(ans)
cout<< "present" << endl;
else
cout<<"notpresent"<< endl;

return 0;
}

