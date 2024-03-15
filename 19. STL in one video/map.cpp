#include<iostream>
#include<map>

using namespace std;

int main(){
map<int,string> m;

m[1]="babbar";
m[2]="love";
m[3]="kumar";

m.insert({5,"bheem"});

cout<<"before erase"<<endl;

for(auto i: m)
{
    cout<<i.first<<" "<<i.second<<endl;

}

cout<<"finding 2 ->"<<m.count(2)<<endl;

m.erase(2);
cout<<"after erase"<<endl;

for(auto i: m)
{
    cout<<i.first<<" "<<i.second<<endl;

}

cout<<endl;

auto it=m.find(3);

for( auto i=it;i!=m.end();i++)
{
 cout<<(*i).first<<endl;

}




return 0;
}
