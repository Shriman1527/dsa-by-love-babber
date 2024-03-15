#include<iostream>
using namespace std;

int& func(int a)
{
    int num=a;
    int& ans =num;
    return ans;

}

int* fun(int n)
{
    int *ptr =&n;
    return ptr;

}
int main(){
// This both above mentioned are bad practices 
// return by reference and return by pointer

int i=5;
// int res= func(i);
// cout << res << endl;

 cout<< fun(i)<< endl;



return 0;
}
