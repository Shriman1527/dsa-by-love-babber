#include<iostream>
using namespace std;

void print_array(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
void alternate(int arr[],int n)
{
  for(int i=0;i<n;i+=2)
  {
   if(i+1 < n)
   {
    int temp;
    // swap=(arr[i],arr[i+1]);
    // swap gives error in this program so we 
    // can write the given program wirhout using swap
    temp = arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;

   }
  }
}
int main(){

// int size;
// cin>>size;
int even[8]={5,8,54,23,1,27,88,2};
int odd[7]={11,22,33,44,55,66,77};
// for(int i=0;i<size;i++)
// {
//     cin>>num[i];
// }

// alternate(num,size);
alternate(even,8);
print_array(even,8);

cout<<endl;
alternate(odd,7);
print_array(odd,7);
//cout<<"Resulting array is "<<(alternate)<<endl;

return 0;
}
