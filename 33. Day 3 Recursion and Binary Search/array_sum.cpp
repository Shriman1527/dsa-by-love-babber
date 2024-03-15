#include<iostream>
using namespace std;


int get_sum(int arr[],int size)
{
   // base case
  

   if(size==0)
   return 0;
   if(size==1)
   {
    return arr[0];

   }

  int remainingPart = get_sum(arr+1,size-1);
  int sum= arr[0]+remainingPart;

  return sum;
}
int main(){
int arr[5]={3,2,5,1,6};
int size=5;

int ans=get_sum(arr,size);
cout << ans << endl;

return 0;
}
