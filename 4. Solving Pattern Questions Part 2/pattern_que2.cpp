#include<iostream>
using namespace std;

int main(){
   /* for Printing like this
    1 2 3
    4 5 6
    7 8 9
        */ 
int n;
cin >> n;
int count=1;
int i=1;
 while(i<=n)
 {

    int j=1;
    while(j<=n)
    {
        cout<<count<<" ";
        count=count+1;
        j++;
    }
    cout<<endl;
    i++;
 }
return 0;
}
