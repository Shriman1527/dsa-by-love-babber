#include<iostream>
using namespace std;

int main(){

// int num=2;
// switch(num)
// {
//     case 1: cout<<"First"<<endl;
//     break;
//     case 2: cout<<"Second"<<endl;
//     break;
//     default: cout<< " It is default  case"<<endl;
// }

/* character case*/
//  int num='a';
// switch(num)
// {
//     case 1: cout<<"First"<<endl;
//     break;
//     case 'a': cout<<"This is a"<<endl;
//     break;
//     default: cout<< " It is default  case"<<endl;
// }

/* If not match with any cases
default case execute*/
// int num=3;
// switch(num)
// {
//     case 1: cout<<"First"<<endl;
//     break;
//     case 2: cout<<"Second"<<endl;
//     break;
//     default: cout<< " It is default  case"<<endl;
// }

/* Nested Switch*/
// int ch='1';
// int num=1;

// switch(ch)
// {
//     case 1: cout<<"First"<<endl;
//     break;
//     case '1': switch(num){
//         case 1: cout<< " Value of num is "<<num<<endl;
//     }
//     break;
//     default: cout<< " It is default  case"<<endl;
//}
/* If we use continue in switch then
what happen*/
int num=1;
switch(num)
{
    case 1: cout<<"First"<<endl;
    break;
    case 2: cout<<"Second"<<endl;
    //continue
    //it give error
    break;
    default: cout<< " It is default  case"<<endl;
}
return 0;
}
