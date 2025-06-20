#include<iostream>
using namespace std;
// int fibonacci(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;

//     }
    
     
//     int ans=fibonacci(n-1)+fibonacci(n-2);
   
//     return ans;

// }

int fibonacciSeries(int n)
{
   if(n==0)
   {
    return 0;
   }
   if(n==1)
   {
    return 1;
   }

   int ans=fibonacciSeries(n-1)+fibonacciSeries(n-2);
  return ans;
}
int main(){

int n;
cin>>n;
// cout<<fibonacci(n);

 cout<<fibonacciSeries(n);

return 0;
}
