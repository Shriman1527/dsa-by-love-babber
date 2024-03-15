#include<iostream>
using namespace std;

void increment(int **p)
{
    ++(**p);
    
}
int main(){

// int first =110;
// int *p = &first;
// int **q= &p;
// int second =(**q)++ +9;
// cout << first << " "<< second << endl;

// int first = 100;
// int *p = &first;
// int **q = &p;
// int second = ++ (**q);
// int *r = *q; // IMP Line 
// ++ (*r);
// cout << first << " "<< second << endl;

int num = 110;
int *ptr = &num;
increment(&ptr);
cout << num << endl;



return 0;
}
