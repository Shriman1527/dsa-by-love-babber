#include<iostream>
using namespace std;

int main(){
int i,n,sum=0;
cout<<"Enter the NO till you want sum: ";
cin>>n;
for(i=1;i<=n;i++)
{
  sum=sum+i;
    

}
cout<<"The Sum of first "
<<n<<" No is "<<sum<<endl;
return 0;
}
