#include<iostream>
using namespace std;

// Global Variable
int score =15;

void a(int& i)
{
cout << i<< endl;
cout<< score<< endl;


}
void b(int & i)
{
cout << i << endl;


}
int main(){

    // local variable;

 int i=5;
 a(i);
 cout<< score << endl;


return 0;
}
