#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int arr[6];
fill_n(arr,6,1);
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
