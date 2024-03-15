#include<iostream>
using namespace std;

 int main(){
    /* For Printing Pattern like:
           *
          **
         ***
        ****   */
// int n;
// cin >>n;
// int row =1;

// while(row<=n )
// {
//     //space print karlo
// int space =n-row;
// while(space)
// {
//     cout<<" ";
//     space=space-1;

// }


//     //stars print karlo
//     int col=1;
//     while(col<=row)
//     {
//    cout<<"*";
//    col=col+1;

//     }
//     cout<<endl;
//     row=row+1;
    

// }

// Homework
 /* For Printing Pattern like:
        ****
        ***
        **
        *
           */
// int n;
// cin >>n;
// int i=1;

// while(i<=n)
// {
    
//    int  star=n-i+1;

//     while(star)
//     {
//         cout<<"*";
//         star--;
        
//     }
//     cout<<endl;
//     i++;
// }

// Homework:

int n;
cin >>n;
int i=1;
while(i<=n)
{
    //space print karlo
    int space=i-1;
    while(space)
    {
        cout<<" ";
        space--;

    }
//staar print karlo
    int star=n-i+1;
    while(star)
    {
      
     cout<<"*";
     star--;
    }
     cout<<endl;
     i++;
}
 
return 0;
}
