#include<iostream>
using namespace std;

int setbits(int n)
{
   int count=0;
   while(n!=0){
     if(n&1)
   {
     count++ ;
    n= n>>1;
   }
   else{
   n=  n>>1;

   }
   }
   
  return count;
   
}
int main(){
int n;
cin >> n;
int p=setbits(n);
cout<<"the total setbits is "<< p<<endl;

return 0;
}
