#include<iostream>
using namespace std;

class Stack{

//properties
public:
int * arr;
int top;
int size;


Stack(int size){

this->size = size;
arr=new int [size];
top=-1;


}

void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack overflow"<<endl;

    }
}

void pop(){

    if(top>=0)
    {
        top--;

    }
    else{
        cout<<"Stack is empty"<<endl;
        

    }

}

int peak(){
    if(top>=0 )
    return arr[top];
    else{
    cout<<"stack is empty"<<endl;
    return -1;

    }
   

}

bool isEmpty(){
    if(top==-1)
    return 1;
    else
    return 0;

}

};

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(54);

    cout<<st.peak()<<endl;

    st.pop();

    cout<<st.peak()<<endl;

    st.pop();

    cout<<st.peak()<<endl;
    
    st.pop();

    cout<<st.peak()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }



return 0;
}
