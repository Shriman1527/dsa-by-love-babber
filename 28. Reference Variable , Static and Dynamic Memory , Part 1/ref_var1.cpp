#include<iostream>
using namespace std;

int main(){
int i=5;

// create a ref variable
int &j=i;

cout <<i << endl;
i++;
cout << i << endl;

j++;
cout << i << endl;

i++;
cout << j << endl;



return 0;
}
