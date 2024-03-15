#include<iostream>
using namespace std;

int main(){
  /* For printing pattern like:
  1111
   222
    33
     4
     */
// int n;
// cin >>n;
// int i=1;
//  int no=1;
// while(i<=n)
// {
//     //space print karlo
//     int space=i-1;
//     while(space)
//     {
//         cout<<" ";
//         space--;

//     }
// //No print karlo
//     int star=n-i+1;
   
//     while(star)
//     {
      
//      cout<<no;
//      star--;
//     }
//     no++;
//      cout<<endl;
//      i++;
// }

/* For printing pattern like:
     1
    22
   333
  4444
     */
// int n;
// cin >>n;
// int i=1;
//  int no=1;
// while(i<=n)
// {
//  //space print karlo
//     int space=n-i;
//     while(space)
//     {
//         cout<<" ";
//         space--;

//     }
// //No print karlo
//    int col=1;
   
//     while(col<=i)
//     {
      
//      cout<<no;
//      col++;
//     }
//     no++;
//      cout<<endl;
//      i++;
// }

/* For printing pattern like:
  1234
   234
    34
     4
     */

// int n;
// cin >>n;
// int i=1;
 
// while(i<=n)
// {
//  //space print karlo
//     int space=i-1;
//     while(space)
//     {
//         cout<<" ";
//         space--;

//     }
// //No print karlo
//    int no=n-i+1;
//    int count=i;
//     while(no)
//     {
      
//      cout<<count;
//      no--;
//      count++;
//     }
    
//      cout<<endl;
     
//      i++;
// }

/* For printing pattern like:
     1
    23
   456 
  78910   */

  int n;
cin >>n;
int i=1;
 int count=1;
while(i<=n)
{
 //space print karlo
    int space=n-i;
    while(space)
    {
        cout<<" ";
        space--;

    }
//No print karlo
int col=1;
while(col<=i)
{
  cout<<count;
  count++;
  col++;
}
cout<<endl;
i++;
}

return 0;
}
