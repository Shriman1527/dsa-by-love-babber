#include<iostream>
using namespace std;

// void dummy(int n)
// {
//     n++;
//     cout<<" n is "<<n<<endl;// op-> 16

// }

// int main(){
//  int n;
//  cin >> n;//n=15
//  dummy(n);

//  cout<<"number n is "<<n<<endl; //op->15

// return 0;
// }
 
 /* Homework*/

//  void update(int a)
//  {
//     a=a/2;

//  }
//  int main(){
//     int a=10;
//     update(a);
//     cout<< a <<endl;

//     return 0;
//  }
// op-> 10


// int  update(int a)
//  {
//     a=a-5;
//     return a;


//  }
//  int main(){
//     int a=15;
//     update(a);
//     cout<< a <<endl;

//     return 0;
//  }
//op-> 15

int  update(int a)
 {
    int ans=a*a;

    return ans;


 }
 int main(){
    int a=14;
   a= update(a);
    cout<< a <<endl;

    return 0;
 }
 //op-> 196