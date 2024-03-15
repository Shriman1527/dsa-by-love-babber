#include<iostream>
using namespace std;

void update1( int n)
{
    n++;

}

void update2(int& n)
{
    // This is where we use the reference variable
    n++;

}

int main(){
int n=5;
cout << "before val for fun 1 :"<< n << endl;
update1(n);
cout << "after val for fun 1 :"<< n << endl;

// This above fun is pass by value function 



// Let's see the pass bt refrence function 
cout << "before val for fun 2 :"<< n << endl;
update2(n);
cout << "after val for fun 2 :"<< n << endl;



return 0;
}
