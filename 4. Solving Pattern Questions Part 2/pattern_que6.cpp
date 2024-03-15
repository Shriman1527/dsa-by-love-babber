#include<iostream>
using namespace std;

int main(){
/*For Printing Pattern like :
   ABC
   DEF
   GHI  */
  
//   int n;
//   cin >>n;
//   int i=1;
//    int count=0;
//      char start='A';
//   while(i<=n)
//   {
//     int j=1;
//     while(j<=n)
//     {   
       
//       //  char ch='A'+count;
//         //or
      
//         cout<<start;
//         start++;
//        // cout<<ch;
//        // count++;
//         j++;

//     }
//     cout<<endl;
//     i++;
//   }

  /*For Printing Pattern like :
   ABC
   BCD
   CDE  */

   // int n;
   // cin >> n;
   // int i=1;
   // int val=0;
   // while(i<=n)
   // {
   //  int j=1;
   //  while(j<=n)
   //  {
   //      //char ch='A'+j-1+ val;
   //     // cout << ch;
   //      //or
   //      char ch='A'+i+j-2;
   //      cout<<ch;
        
   //      j++;

   //  }
   //  cout<<endl;
   //  i++;
   //  val++;
   // }

   /*For Printing Pattern like :
   ABC
   BCD
   CDE 
   with using start */

      int n;
      cin >>n;
      int i=1;
      

      while(i<=n)
      {
         char start ='A';
         int j=1;
         while(j<=n)
         {
            char ch=start+i-1;;
            cout<<ch;
            start++;
            j++;
         }
         cout<<endl;
         i++;
      }


return 0;
}
