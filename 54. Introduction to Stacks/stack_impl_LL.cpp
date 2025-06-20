#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    
    Node(int n){
        this->data=n;
        this->next=NULL;


    }

    

};

class Stack{
    Node * top;

    public:
    Stack(){
        top=NULL;

    }

    void push(int data){
        Node * newNode=new Node(data);
        if(!newNode)
        {
            cout<<"stack overflow";
            exit(1);

        }
        newNode->data=data;
        newNode->next=top;
        top=newNode;


    }

    void pop(){
        if(top==NULL){
            cout<<"stack underflow";
            exit(1);
        }
        Node * temp=top;
        top=top->next;

        free(temp);

    }

    int peak()
    {

        if(top==NULL){
            return -1;
        }
        return top->data;

    }

    bool isEmpty(){

        if(top==NULL){
            return true;
    }
    else{
        return false;
    }
    }
};

int main(){
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  
  cout<<"top ele is"<<s.peak()<<endl;
  s.pop();
  s.pop();

cout<<"top ele is"<<s.peak()<<endl;
 s.pop();
  s.pop();
if(s.isEmpty())
{
    cout<<"stack is empty"<<endl;

}
else{

    cout<<"stack is not empty"<<endl;
}
  cout<<"top ele is"<<s.peak()<<endl;

return 0;
}
