#include<iostream>
using namespace std;
/* Program to find the power of any no by using 
FUNCTION */

int power(int a,int b)
{
    int ans =1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}

int main(){
 int a,b;
 cin>>a>>b;
 int answer=power(a,b);
cout<<"Answer is "<<answer<<endl;

/* Written this above code in diff format*/
return 0;
}
