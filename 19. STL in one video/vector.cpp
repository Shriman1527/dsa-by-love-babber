#include<iostream>
#include<vector>

using namespace std;

int main(){
 vector<int> v;
 

//  If we know the size of vector already then 
//  how to initialize the vector 
 vector<int > a(5,1);
 cout<<"print a"<<endl;
 for(int i:a)
 {
  cout<<i<<" ";
 }
 cout<<endl;
 
vector<int> last(a);
for(int i:last)
{
    cout<<i<<" ";

}

cout<<endl;

cout<<"Capacity->"<< v.capacity()<<endl;
 v.push_back(1);
 cout<<"Capacity->"<< v.capacity()<<endl;

 v.push_back(2);
 cout<<"Capacity->"<< v.capacity()<<endl;

v.push_back(3);
 cout<<"Capacity->"<< v.capacity()<<endl;

cout<<"Size->"<<v.size()<<endl;

cout<<"Element at 2nd->"<<v.at(2)<<endl;
// All operations used in array will also used in 
// vector also 

cout<<"First Element->"<<v.front()<<endl;

cout<<"Last Element->"<<v.back()<<endl;

cout<<"Before pop"<<endl;
for(int i:v)
{
    cout<<i<<" ";
}
cout<<endl;

v.pop_back();

cout<<"After pop"<<endl;
for(int i:v)
{
    cout<<i<<" ";
}
cout<<endl;
// In the vector , the capacity is the how much
// memory ia allocated to the vector and the size 
// is the how many elements are in the vector 

cout<<"Before clear size"<<v.size()<<endl;
v.clear();
cout<<"After clear size"<<v.size()<<endl;






return 0;
}
