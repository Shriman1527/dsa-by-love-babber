#include<iostream>
using namespace std;

int main(){

/* if Statement*/
// int a;
// cin>>a;
// if(a>0)
// cout<<"a is positive"<<endl;

/* if_else Statement*/

// int b;
// cin>>b;
// if(b>0)
// cout<<"b is positive"<<endl;
// else
// cout<<"b is negative"<<endl;

/* cin.get()*/
// This gives the ASCII values of waht we enter
// int a;
// a=cin.get();
//  cout<<"val of a is "<< a <<endl;

 /* Greater No Program*/
 
//  int a,b;
// cout<<"Enter the Value of a:";
// cin>>a;
// cout<<"Enter the Value of b:";
// cin>>b;
// if(a>b)
// cout<<"a is greater "<<endl;
// if(b>a)
// cout<<"b is greater"<<endl;

/*Identify Positive ,Negative and Zero*/
// int a;
// cout<<"Enter the Value of a:";
// cin>>a;
// if(a>0)
// cout<<"a is positive"<<endl;
// else
// {
//     if(a<0)
//     cout<<"a is negative"<<endl;
//     else
//     cout<<"a is zero"<<endl
//     }

/* Above Program using else_if Ladder*/

// int a;
// cout<<"Enter the Value of a:";
// cin>>a;
// if(a>0)
// cout<<"a is positive"<<endl;
// else if(a<0)
// cout<<"a is negative"<<endl;
// else
// cout<<"a is zero"<<endl;

/* Some Questions */
//1
// int a=9;
// if(a==9)
// cout<<"NINEY";
// if(a>0)
// cout<<"POSITIVE";
// else
// cout<<"NEGATIVe";
//2
// int a=2;
// int b=a+1;
// if((a=3)==b)
// cout<<a;
// else
// cout<<a+1;

//3
// int a=24;
// if(a>20)
// cout<<"Love";
// else if(a==24)
// cout<<"Lovely";
// else
// cout<<"Babber";

/* Homework : */
char ch;
cin>>ch;
if(ch>='a' && ch<='z')
cout<<"Lowercase";
else if (ch>='A' && ch<='Z')
cout<<"Uppercase";
else if(ch>='0' && ch<='9')
cout<<"Numeric";
else
cout<<"other special ch";

return 0;
}
