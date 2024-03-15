#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    cout<<"sizeof array is :"<< n<< endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";

    }
    cout<<endl;

}
bool linear_search(int arr[],int n,int key)
{

    print(arr,n);

    // base case
    if(n==0)
    {
        return false;
    }

    if(arr[0]==key)
    {
  return true;
    }
    else
    {
      bool remainingPart= linear_search(arr+1,n-1,key) ;
    return remainingPart;
    }

}
int main(){

int arr[5]={3,5,1,2,6};
int size=5;
int key =12;

bool ans = linear_search(arr,size,key);

if(ans)
cout<<"present"<<endl;
else
cout<<"absent"<< endl;


return 0;
}
