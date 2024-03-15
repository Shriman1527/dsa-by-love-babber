#include<iostream>
using namespace std;

int main(){
/* For Printing like this :
   1
   2 3
   3 4 5
   4 5 6 7 
   */
// int n;
// cin >> n;
// int row=1;
// while(row<=n)
// {
//     int column=1;
//     int value=row;
//     while(column<=row)
//     {
//         cout<<value;
//         value++;
//         column++;
//     }
//     cout<<endl;
//     row++;

// }

/* Homework is that write above code without 
using int value var */

/* For Printing like this :
   1
   2 1
   3 2 1 
   4 3 2 1
   */

  int n;
  cin >> n;
  int i=1;
  while(i<=n)
  {
    int j=1;
   // int val=i;
    while(j<=i)
    {
      //  cout<<val;
        /* we can also use formula i-j+1 instead of
        using int value */
        cout<<(i-j+1)<<" ";
       // val--;
        j++;

    }
    cout<<endl;
    i++;
  }

return 0;
}
