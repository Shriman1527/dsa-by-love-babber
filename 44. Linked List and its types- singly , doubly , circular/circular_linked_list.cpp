#include<iostream>
using namespace std;

class Node{

    public :
    int data;
    Node * next;


    // Constructor
    Node(int d )
    {
        // cout<<"constructor called"<<endl;

        this->data=d;
        this->next=NULL;

    }

    // destructor
    ~Node()
    {
        int val= this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;

        }
        cout<<"Memory free with data "<<val<<endl;

    }
};

void insertNode(Node* & tail , int element,int d)
{

 if(tail==NULL)
 {
    Node * newNode=new Node(d);
    tail= newNode;
    newNode->next=newNode;

 }
 else{
    // non empty list
     // asuumimg that element is present in the list
     Node * curr = tail;
     while(curr->data != element)
     {
        curr= curr->next;

     }

    //  element is found -> curr is representing element wala node 
    Node * temp= new Node (d);
    temp->next=curr->next;
    curr->next=temp;




 }

}

// base on value
void deleteNode(Node * & tail , int val)
{
 // cases : empty list
 if(tail==NULL)
 {
    cout<<" LL is empty "<<endl;

 }
 else
 {
    // non empty
    // assumimg that value is present in list

    Node * prev = tail;
    Node * curr = prev->next;

    while( curr->data != val)
    {
        prev= curr;
        curr= curr->next;

    }

    prev->next= curr->next;

    // 1node LL
    if(curr==prev)
    {
        tail=NULL;

    }

    // >= 2 node linked list

    if(tail==curr)
    {
        tail=prev;
        

    }
    curr->next=NULL;

    delete curr;



 }


}
void print(Node * &tail){

    Node * temp =tail;
    // cout<<tail->data<<" ";


    // while(tail->next != temp)
    // {
    //     cout<<tail->data<<" ";
    //     tail=tail->next;


    // }
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
        return ;

    }
    do{
        cout<<tail->data<<" ";
        tail= tail->next;

    }while(tail!= temp);
    cout<<endl;

}




int main(){

 Node * tail = NULL;

// empty list insertion
insertNode(tail,5,3);

print (tail);

insertNode(tail,3,5);
print (tail);
/*
insertNode(tail,5,7);
print (tail);

insertNode(tail,7,9);
print (tail);

insertNode(tail,5,6);
print (tail);

insertNode(tail,9,10);
print (tail);

insertNode(tail,3,4);
print (tail);

deleteNode(tail,3);
print (tail);

deleteNode(tail,10);
print (tail);
*/
deleteNode(tail,3);
print (tail);






 


return 0;
}
