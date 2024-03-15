#include<iostream>
using namespace std;

// void update(int *p)
// {
//     *p=(*p) * 2;

// }
void fun(int arr[])
{
    cout << arr[0] << " ";

}

int main(){

// Question 1

// int i= 10;
// update(&i);
// cout << i << endl;


// Question 2

int arr[]={11,12,13,14};
fun(arr+1);
cout << arr[0] << endl;

return 0;
}
