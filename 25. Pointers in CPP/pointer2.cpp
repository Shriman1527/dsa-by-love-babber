#include<iostream>
using namespace std;
int number(int b)
{
cout<<"Number in fun is"<< b <<endl;
b++;
cout<< "Number in function after updation is :"<< b <<endl;
return b;

}
int main(){

cout<< " enter the number :";
int a;
cin>> a;
 cout<< " Number is :"<< a <<endl;

 int c = number(a);
 cout<<"the number after return is"<< c<<endl;



return 0;
}
