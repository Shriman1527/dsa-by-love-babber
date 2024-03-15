#include<iostream>
using namespace std;

void function(int a,int b)
{
    a++;
    b++;
    cout << a << b << endl;

}
int main(){

int a=1 , b=2;
function(a,b);

return 0;
}
