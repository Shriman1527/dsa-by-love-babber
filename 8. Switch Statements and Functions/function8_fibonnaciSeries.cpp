#include<iostream>
using namespace std;

int fibonnaci(int n){
   
int t1=0,t2=1;
 cout<<t1<<","<<t2<<",";
 int next_term;
    for(int i=3;i<=n;i++)
    {
        next_term=t1+t2;
      t1=t2;
      t2=next_term;
      cout<< next_term <<",";
       if(i==n)
       break;

    }
    cout<<endl;

   cout<<" the nth term is"<< next_term <<endl;


   
    
}
int main(){
int n;
cin>>n;
fibonnaci(n);
return 0;
}

