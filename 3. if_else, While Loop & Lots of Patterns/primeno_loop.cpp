#include<iostream>
using namespace std;

int main(){
int n,i=2;
cin >> n;
while(i<n)
{
    if(n%i==0)
    cout<<"not prime for "<<i<<endl;
    else
    cout<<"prime for "<< i <<endl;
    i=i+1;

}
/* We will weite this code again after some concepts
  this is only prototype for how to approach */
return 0;
}
