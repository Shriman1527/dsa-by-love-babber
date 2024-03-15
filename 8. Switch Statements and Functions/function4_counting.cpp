#include<iostream>
using namespace std;

// Function Signature
void counting(int n){
    // Function Body
    for(int i=1;i<=n;i++){
        cout << i <<" ";
    }
    cout<<endl;
}
int main(){
    cout<<"enter the value of n:";
int n;
cin >> n;

// Function Call
counting(n);

return 0;
}

