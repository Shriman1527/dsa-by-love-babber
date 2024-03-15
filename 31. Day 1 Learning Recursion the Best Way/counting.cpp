#include<iostream>
using namespace std;

void counting(int n)
{
    // base case
    if(n==0)
    {
        return ;
    }

// processing
    cout << n << endl;

// Recursive Relation
    counting(n-1);

// if we alter the position of the RR and pro then 
// instead of last to start , numbers will print from
// first to last


}
int main(){

int n;
cin>> n;
cout << endl;

counting(n);


return 0;
}
