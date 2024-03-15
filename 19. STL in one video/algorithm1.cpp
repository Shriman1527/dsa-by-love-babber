#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

vector<int> v;
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);

cout<<binary_search(v.begin(),v.end(),5)<<endl;
//finding elements 
cout<<binary_search(v.begin(),v.end(),6)<<endl;

cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),6)- v.begin();
cout<<endl;

cout<<"upper bound->"<<upper_bound(v.begin(),v.end(),4)- v.begin();

cout<<endl;
int a=3;
int b=5;

cout<<"max-> "<<max(a,b)<<endl;

cout<<"min-> "<<min(a,b)<<endl;

swap(a,b);
cout<<"a-> "<<a<<endl;

string abcd="abcd";
reverse(abcd.begin(),abcd.end());

cout<<"reverse string is->"<<abcd<<endl;

rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate"<<endl;
for(int i:v)
{
    cout<<i<<" ";

}


// Sort

sort(v.begin(),v.end());
cout<<"after sorted"<<endl;
for(int i:v)
{
    cout<<i<<" ";
    
}




return 0;
}
