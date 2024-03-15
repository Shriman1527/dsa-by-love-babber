#include<iostream>
using namespace std;

int main(){

// Create 2D arrays :
int arr[3][4];

// Input in 2D array :-> row wise input
// if we want to take input columnwise then you
// just have to alter the i and j iterstion as well 
// as input condition as arr[j][i] in 

for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        cin >> arr[i] [j] ;

    }
}
cout<<endl;

// Output in 2D array :
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        cout << arr[i] [j]<<" ";

    }
    cout<<endl;

}

// also take a input as :
// int arr1[3][3]={1,2,3,4,5,6,7,8,9};
// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<3;j++){
//         cout<<arr1[i][j]<<" ";

//     }
//     cout<<endl;

// }
return 0;
}
