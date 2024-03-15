#include<iostream>
using namespace std;

int main(){
int n,i,flag=0;
cout<<"enter the no";
cin>>n;
for(i=2;i<n;i++)
{
    if(n%i==0)
    flag=1;
   // cout<<"not prime"<<endl;
   // else
    //cout<<"prime"<<endl;


}
if(flag==1)
cout<<"not prime"<<endl;
else
cout<<"prime"<<endl;
return 0;
}
