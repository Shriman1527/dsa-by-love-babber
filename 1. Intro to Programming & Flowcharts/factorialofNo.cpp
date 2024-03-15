#include<iostream>
using namespace std;

int main(){
int n,i,fact=1;

cout<<"Enter the No"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
 fact=fact*i;
}
cout<<"The factorial of No is "<<fact<<endl;
return 0;
}
