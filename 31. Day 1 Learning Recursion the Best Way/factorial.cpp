#include<iostream>
using namespace std;

int fact(int n)
{
    // base case
    if(n==0)
{
    return 1;
}
// int smallerproblem = fact(n-1);
// int biggerproblem = n* smallerproblem;

// return biggerproblem;
return n*fact(n-1);


}
int main(){

int n;
cin>>n;

int ans= fact(n);
cout << ans << endl;


return 0;
}
