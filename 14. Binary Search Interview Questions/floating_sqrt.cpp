#include<iostream>
using namespace std;

 long long int sqrt_integer(int n)
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

   double more_precision(int n, int precision , int tempsol)
   {
double factor=1;
     double ans=tempsol;

     for(int i=0;i<precision ;i++){
        factor=factor/10;

        for( double j=ans;j*j<n;j=j+factor){
            ans=j;

        }
     }
     return ans;
     

   }
int main(){
    int n;
    cout<<"enter the number"<<endl;
cin>>n;

int tempsol= sqrt_integer(n);

cout<<"Answer is "<<more_precision(n,3,tempsol);



return 0;
}
