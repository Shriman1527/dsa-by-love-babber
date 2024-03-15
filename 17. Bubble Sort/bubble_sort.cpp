#include<iostream>
using namespace std;

void bubble(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
       for(int j=0;j<n-i;j++)
       {
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);

       }
    }
}

void print(int a[],int n)
{
   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
}
int main(){
cout<<"Enter the no of elements :";
int n;
cin>>n;
int a[n];

cout<<"Enter the elements :";
for(int i=0;i<n;i++)
{
    cin>>a[i];

}

bubble(a,n);
print(a,n);



return 0;
}
