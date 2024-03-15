#include<iostream>
#include<array>
using namespace std;

int main(){

// This is the basic array
int basic[3]={1,2,3};

array<int,4>a = {1,2,3,4};
// This is also static array so do not use always

// How to find the size of STL array ?
int size = a.size();

for(int i=0;i<size;i++)
{
    cout<<a[i];

}

cout<<"Element at 2nd Index "<<a.at(2)<<endl;

cout<<"Empty or not "<<a.empty()<<endl;

cout<<"First Element->"<<a.front()<<endl;

cout<<"Last Element->"<<a.back()<<endl;


return 0;
}
