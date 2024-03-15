#include<iostream>
using namespace std;
int arithmetic(int n){
    int ans;
    ans=(3*n)+7;
    return ans;

}
int main(){
int n,res;
cout<<"Enter the value of n : ";
cin>>n;
res=arithmetic(n);
cout<<res<<endl;

return 0;
}
