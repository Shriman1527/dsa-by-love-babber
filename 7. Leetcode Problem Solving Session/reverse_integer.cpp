#include<iostream>
using namespace std;
int reverse(int a)
{
int ans=0;

  while(a)
  {
  int digit = a%10;
   ans = ans*10 + digit;
   a=a/10;


  }  
return ans;

}
int main(){
int a;
cout<<"enter the number"<< endl;

cin>>a;

cout <<"Reverse no is" << reverse(a)<< endl;



return 0;
}
