#include<iostream>
using namespace std;

int main(){
     /*For Printing Pattern like :
   A
   BC
   CDE 
   DEFG */
// int n;
// cin >>n;
// int i=1;

// while(i<=n)
// {
//     int j=1;
//     while(j<=i)
//     {
//         char ch='A'+i+j-2;
//         cout<<ch;
//         j++;
        
//     }
//     cout<<endl;
//     i++;
    
// }

 /*For Printing Pattern like :
   D
   CD
   BCD
   ABCD */
    // int n;
    // cin >>n;
    // int i=1;
    // while(i<=n)
    // {
    //     int j=1;
    //     char start='A'+n-i;
    //     while(j<=i)
    //     {
    //         cout << start;
    //         start++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }

    //Homework:

    int n;
    cin >>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        char start ='A'+i-1;
        while(j<=n)
        {
            cout<<start;
            start++;
            j++;

        }
        cout<<endl;
        i++;

    }

return 0;
}