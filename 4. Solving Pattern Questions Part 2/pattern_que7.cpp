#include<iostream>
using namespace std;

int main(){
    /*For Printing Pattern like :
   A
   BB
   CCC  */
// int n;
// cin >>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=i)
//     {
//         char ch='A'+i-1;
//         cout<<ch;
//         j++;

//     }
//     cout<<endl;
//     i++;
// }

 /*For Printing Pattern like :
   A
   BC
   DEF
   GHIF   */

   int n;
   cin>>n;
   int i=1;
   int count=0;
   while(i<=n)
   {
    int j=1;
    while(j<=i)
    {
      char  ch='A'+count;
        cout<<ch;
        count++;
        j++;

    }
    cout<<endl;
    i++;
   }
return 0; 
}
