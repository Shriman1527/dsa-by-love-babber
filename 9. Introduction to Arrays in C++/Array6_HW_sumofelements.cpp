#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
 int result=0;
 for(int i=0;i<n;i++)
 {
    result=result+arr[i];

 }
 return result;

}
int main(){
cout<<"Enter the Size of an array :";
int size;
cin>>size;
int num[100];
cout<<"Enter the elements :";
for(int i=0;i<size;i++)
{
    cin>>num[i];
}

cout<<"Sum of ele of an Array "<<sum(num,size)<<endl;
return 0;
}

