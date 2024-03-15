#include<iostream>
using namespace std;

int main(){

    /* for Printing like this
       1 2 3 4
       1 2 3 4
       1 2 3 4
       1 2 3 4  */
// int n;
// cin >> n;
// int i=1;

// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         cout<< j ;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

/* for Printing like this
     4 3 2 1
     4 3 2 1
     4 3 2 1
     4 3 2 1
    just you have to use formula (n-j+1) 
        */
    int n;
cin >> n;
int i=1;

while(i<=n)
{
    int j=1;
    while(j<=n)
    {
        cout<< (n-j+1) ;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}   
return 0;
 }
