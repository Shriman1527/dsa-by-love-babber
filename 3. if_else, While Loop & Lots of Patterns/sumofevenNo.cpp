#include<iostream>
using namespace std;

int main(){
int n,i=2,sum=0;
cin >> n;
while(i<=n)
{
    
    
        cout<<i<<",";
        sum=sum+i;
        i=i+2;
}
cout<< endl <<"The sum of even no is "<<sum;
return 0;
}
