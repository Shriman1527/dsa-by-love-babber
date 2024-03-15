#include<iostream>
using namespace std;
bool isprime(int n){

    for (int i=2;i<n;i++){
    // divide ho gya ,not a prime no
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}
int main(){
 int n;
 cout<<" Enter the No :";
 cin>>n;

 if(isprime(n)){
    cout<<n<<" is a prime no"<<endl;

 }
 else
 cout<<n<<" is not a prime no"<<endl;
return 0;
}
