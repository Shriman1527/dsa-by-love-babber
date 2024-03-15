#include<iostream>
using namespace std;

int unique_ele(int arr[],int n)
{
    int ans=0;
     for(int i=0;i<n;i++)
     {
        ans=ans^arr[i];
     }
     return ans;
}
int main(){

int num[100]={1,2,3,4,2,3,4,1,5,6,5};

cout<<"Unique ele is "<<unique_ele(num,11)<<endl;

return 0;
}
