#include<iostream>
using namespace std;

int main(){
int a,b,c;
cout<<"enter the sides of traingle:";
cin>>a>>b>>c;
if(a+b>c && a+c>b && b+c>a)
cout<<"Valid Traingle"<<endl;
else
cout<<"Invalid Traingle"<<endl;

return 0;
}
