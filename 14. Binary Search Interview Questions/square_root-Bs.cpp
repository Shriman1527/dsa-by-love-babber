#include<iostream>
using namespace std;
   long long int binary_search(int n)
   {
    int start=0;
    int end=n;
     long long  int mid=start+(end-start)/2;
    long long int ans=-1;
    while(start<=end)
    {
        long long int square =mid*mid;

        if(square==n)
        {
            return mid;
        }
        if(square<n)
        {
            ans=mid;
             start=mid+1;
            
           

        }
         else //if(mid*mid<n)
        {
           
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
    }
    return ans;

   }
int main(){

int n=25;
 int p= binary_search(n);
 cout<<p<<endl;


  
return 0;
}
