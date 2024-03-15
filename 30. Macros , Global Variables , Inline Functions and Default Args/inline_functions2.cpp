#include<iostream>
using namespace std;

// int get_max(int& a, int& b)
// {
//     return (a>b) ? a: b;
// }

inline int get_max(int& a, int& b)
{
    return (a>b) ? a: b;
}
int main(){

int a=1,b=2;
int ans=0;
 

 //  Tertiary Operator

// ans= (a>b) ? a: b;

ans= get_max(a,b);
cout << ans << endl;

a=a+3;
b=b+1;


ans= get_max(a,b);

cout << ans << endl;

return 0;
}
