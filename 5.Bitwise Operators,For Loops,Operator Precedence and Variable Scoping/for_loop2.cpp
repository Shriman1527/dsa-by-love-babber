#include<iostream>
using namespace std;

int main(){
/* Print the sum of N numbers*/
// int n;
// cout<<"enter the value of n:"<<endl;
// cin >> n;
// int sum=0;
// for(int i=1;i<=n;i++)
// {
//   //  sum=sum+i;
//   sum+=1;
// }
// cout<<"THe sum of N number is "<<sum<<endl;


/* Fibbonacci Series*/
// int n;
// cin >> n;
// int a=0;
// int b=1;
// cout<<a<<" "<<b<<" ";

// for(int i=1;i<=n;i++)
// {
//   int nextnum=a+b;
//   cout<<nextnum<<" ";

//   a=b;
//   b=nextnum;
// }

/* prime Number*/

// int n;
// cout<<" enter the value of n"<<endl;
// cin >> n;
// bool isPrime=1;
// for(int i=2;i<n;i++)
// {
//  if(n%i==0)
//  {
//   isPrime=0;
//   break;

//  }
// }
// if(isPrime==0)
// cout<<"Not a prime Number"<<endl;
// else
// cout<<"is a prime number"<<endl;


//continue

// for(int i=0;i<5;i++)
// {
//   cout<<"hi"<<endl;
//   cout<<"hey"<<endl;

//   continue;
//   cout<<"reply toh krde"<<endl;

// }


// Homework

//1

// for(int i=0;i<=5;i--)
// {
//   cout<<i<<" ";
//   i++;

// }

//2
  // for(int i=0;i<=5;i++)
  // {
  //   cout<<i<<" ";
  //   i++;

  // }

  //3 
  // for(int i=0;i<=15;i+=2)
  // {
  //   cout<<i<<" ";
  //   if(i&1)
  //   {
  //     continue;

  //   }
  //   i++;
  // }

//4
// for(int i=0;i<5;i++)
// {
//   for(int j=1;j<=5;j++)
//   {
//     cout<<i<<" "<<j<<" "<<endl;

//   }
// }
 

//5
for(int i=0;i<5;i++) 
{
  for(int j=1;j<=5;j++)
  {
    if(i+j==10)
    {
      break;

    }
    cout<<i<<" "<<j<<" "<<endl;

  }
}
return 0;
}
