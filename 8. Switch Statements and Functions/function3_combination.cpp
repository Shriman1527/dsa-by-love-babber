#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    return fact;
}

int nCr(int n,int r){
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);

    return num/deno;
}
int main(){
int n,r,p;
cout<<"enter the val of n :";
cin>>n;
cout<<"enter the val of r :";
cin>>r;

p=nCr(n,r);
cout<<p<<endl;



return 0;
}
