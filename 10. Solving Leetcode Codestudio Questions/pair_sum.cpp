#include<iostream>
using namespace std;
int pair_sum(int arr[],int key)
{
    int i,j,n;
n=7;
    for(i=0;i<n-1;i++){

        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==key){
                cout<<arr[i]<<arr[j]<<endl;


            }
        }
    }
}
int main(){

int arr[7]={1,2,3,4,5,6,7};
int key=5;

pair_sum(arr,key);


return 0;
}
