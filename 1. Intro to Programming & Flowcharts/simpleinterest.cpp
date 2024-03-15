#include<iostream>
using namespace std;

int main(){
int p,r,n,si;
cout<<"Enter the Principal Amount:";
cin>>p;
cout<<"Enter the Rate of Interest:";
cin>>r;
cout<<"Enter the No of Years:";
cin>>n;
si=(p*r*n)/100;
cout<<"The Simple Interest is "<<si<<endl;
return 0;
}
