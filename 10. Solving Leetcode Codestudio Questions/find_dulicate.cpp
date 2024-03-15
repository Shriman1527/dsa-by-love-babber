#include<iostream>
using namespace std;

int find_duplicate(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];

    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;

    }
    return ans;
}
int main(){

int num[100]={1,2,3,4,5,6,7,4};

int p=find_duplicate(num,8);

cout<<p<<endl;


return 0;
}
