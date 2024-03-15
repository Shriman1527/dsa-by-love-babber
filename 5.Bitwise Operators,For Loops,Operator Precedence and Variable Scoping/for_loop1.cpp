#include<iostream>
using namespace std;

int main(){
/*Printing No fron 1 to N*/
//    int n;
   
//    cout<<"enter the value of n:"<<endl;
//    cin >> n;
//    cout<<"printing the count from 1 to n:"<<endl;
//    for(int i=1;i<=n;i++)
//    {
//     cout<<  i <<endl;

//    }


//    int n;
   
//    cout<<"enter the value of n:"<<endl;
//    cin >> n;
//    cout<<"printing the count from 1 to n:"<<endl;

//     int i=1;
//    for(;i<=n;i++)
//    {
//     cout<<  i <<endl;
    
//    }

//     int n;
   
//    cout<<"enter the value of n:"<<endl;
//    cin >> n;
//    cout<<"printing the count from 1 to n:"<<endl;

//     int i=1;
//    for(;i<=n;)
//    {
//     cout<<  i <<endl;
//     i++;
//    }


   
   /*This program gives output but then start run to infinite. 
    */
//     int n;
//     cout<<"enter the value of n:"<<endl;
//    cin >> n;
//    cout<<"printing the count from 1 to n:"<<endl;

//     int i=1;
//    for(; ;)
//    {
//     if(i<=n)
//     {
// cout<<  i <<endl;
//     }
//   i++;
//    }

   /* The solution of above program is ,use break
   after if block in else block*/
//      int n;
//     cout<<"enter the value of n:"<<endl;
//    cin >> n;
//    cout<<"printing the count from 1 to n:"<<endl;

//     int i=1;
//    for(; ;)
//    {
//     if(i<=n)
//     {
// cout<<  i <<endl;
//     }
//     else
//     {
//         break;
//     }
//   i++;
//    }

   /* For Loop Variation*/
//  int n;
//     cout<<"enter the value of n:"<<endl;
//    cin >> n;
   for (int a=0,b=1;a>=0 && b>=1;a--,b--)
       cout<<a <<" "<<b <<endl;
       //op : 0 1
return 0;
}
