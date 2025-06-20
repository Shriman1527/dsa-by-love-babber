#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(12);
    q.push(15);
    q.push(13);

    cout<<"size: "<<q.size()<<endl;
    cout<<"front: "<<q.front()<<endl;

    q.pop();

    cout<<"size: "<<q.size()<<endl;
    cout<<"front: "<<q.front()<<endl;


    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        
        cout<<"queue is not empty"<<endl;
    }

return 0;
}

