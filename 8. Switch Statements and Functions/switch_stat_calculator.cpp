#include<iostream>
using namespace std;

int main(){
// cout<<"Enter the value Of numbers:"<<endl;
// int a,b;
// cin>>a>>b;
// char op;
// cout<<"enter the operation:";
// cin>>op;
// switch(op)
// {
//     case '+':
//     cout<<"The sum is "<<a+b<<endl;
//     break;
//     case '-':
//     cout<<"The sub is "<<a-b<<endl;
//     break;
//     case '*':
//     cout<<"The mul is "<<a*b<<endl;
//     break;
//     case '/':
//     cout<<"The div is "<<a/b<<endl;
//     break;
//     case '%':
//     cout<<"the rem is"<<a%b<<endl; 
//     break;
//     default :
//     cout<<"invalid opration"<<endl;


// }

/* Homework Question*/
int amount;
cout<<"Enter the amount : ";
cin>>amount;
int notes;
while(amount!=0)
{
 cout<<"enter the notes"<<endl;
 cin>>notes;

switch(notes)
{
    case 100:
    cout<<amount/100<<endl;
   break;

    case 50 :
  cout<<amount/50<<endl;
break;
    case 20 :
  cout<<amount/20<<endl;
break;
    case 1:
  cout<<amount/1<<endl;
break;
}
amount=amount%notes;

}



return 0;
}

