#include<iostream>
using namespace std;



// int getMax(int num[],int n){

//     int max= INT16_MIN;

//     for(int i=0;i<n;i++)
//     {
//         if(num[i]>max){
//             max=num[i];

//         }
//     }
//     // returning max
//     return max;
// }

// int getMin(int num[],int n){

//     int min= INT16_MAX;

//     for(int i=0;i<n;i++)
//     {
//         if(num[i]<min){
//             min=num[i];

//         }
//     }
//     // returning min
//     return min;
// }
// int main(){

// int size;
// cin>>size;

// // int num[size];
// // // this is not good practice

// int num[100];

// // taking input in an array
// for(int i=0;i<size;i++)
// {
//     cin>>num[i];

// }

// cout<<"Maximum value is "<<getMax(num,size)<<endl;
// cout<<"Minimum value is "<<getMin(num,size)<<endl;
// return 0;
// }




// Above code can also be written using predefine function 
// max and min 

int getMax(int num[],int n){

    int maxi= INT16_MIN;

    for(int i=0;i<n;i++)
    {
       maxi=max(maxi,num[i]);
    }
    // returning max
    return maxi;
}

int getMin(int num[],int n){

    int mini= INT16_MAX;

    for(int i=0;i<n;i++)
    {
       mini=min(mini,num[i]);
    }
    // returning min
    return mini;
}
int main(){

int size;
cin>>size;

int num[100];

// taking input in an array
for(int i=0;i<size;i++)
{
    cin>>num[i];

}

cout<<"Maximum value is "<<getMax(num,size)<<endl;
cout<<"Minimum value is "<<getMin(num,size)<<endl;
return 0;
}
