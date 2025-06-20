#include<iostream>
using namespace std;

void reverse(string & name,int i){

   if(i>=name.length()){
    return;

   }

    i++;

    
    
    
    reverse(name,i);


}
int main(){


string name="shriman";
int i=0;
int n=name.length()-1;

reverse(name,i);
cout<<name<<endl;

return 0;
}
