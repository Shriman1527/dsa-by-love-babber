#include<iostream>
using namespace std;

int main(){
/* for Printing like this
     *
     **
     ***
     ****

     i=row
     j=cloumn
        */
    // int n;
    // cin >> n;
    // int i=1;

    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //      cout<<endl;
    //      i++;
    // }  

/* for Printing like this
    1
    22
    333
    444

        */
    //    int n;
    //    cin >>n;
    //    int i=1;

    //    while(i<=n)
    //    {
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //    }

       /* For Printing likr this :
   1
   2 3
   4 5 6
   7 8 9 10*/

    int n;
     cin >> n;
     int i=1;
     int  count =1;

     while(i<=n)
     {
        int j=1;
        while(j<=i)
        {
            cout<<count;
            count++;
            j++;

        }
        cout<<endl;
        i++;

     }



return 0;
}
