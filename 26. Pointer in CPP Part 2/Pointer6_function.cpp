#include<iostream>
using namespace std;

void print(int *p)
{
    cout<< p << endl; // gives address
    cout << *p << endl; // gives us value

}

void update(int *p)
{
    // p=p+1;
    // cout<< " val in fun update :" << p << endl;

    *p = *p+1;




}
int main(){

int val=5;

int *p = &val;

// print(p);

// cout << "before" << p << endl;
 cout << "before" << *p << endl;
 update(p);

// cout << "after " << p << endl;
cout << "after " << *p << endl;


return 0;
}
