#include<iostream>
#include<stack>
using namespace std;
string reverse_string(string str){
     stack<char> ans;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        ans.push(ch);

    }

string res="";

    while(!ans.empty()){
        char ch=ans.top();
        res.push_back(ch);
        ans.pop();

    }

    return res;
    
}

void delete_middle(stack<int>&s,int count, int size){

   
    if(count==size/2)
    {
        s.pop();
        return ;

    }

    int num= s.top();
    s.pop();

    delete_middle(s, count+1 , size);

    s.push(num);

    
}
    

int main(){

    // string str="Shriman";
    // cout<<"Reverse string is "<<reverse_string(str);

    //Question2 : delete middle of the stack

    stack<int>s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.push(55);

    int count=0;
    int size=s.size();

    
    delete_middle(s, count , size);

    cout<<"Stack after deletion is : ";
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();




   

   
return 0;
}
