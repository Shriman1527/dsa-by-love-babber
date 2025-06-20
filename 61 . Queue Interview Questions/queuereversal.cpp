#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int>queue_reverse(queue<int> q){

    stack<int> s;
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        s.push(ele);

       }
     while(!s.empty()){
        int ele=s.top();
        s.pop();
        q.push(ele);
     }
    return q;


     


}     
int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    queue<int> r=queue_reverse(q);

    while(!r.empty()){
        cout<<r.front()<<" ";
        r.pop();
    }



return 0;
}
