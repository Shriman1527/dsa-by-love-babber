#include<iostream>
using namespace std;


class Node {
    private:
  
    public:
    int data;
    Node * next;

    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }

    //destructor
    ~Node(){
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;


        }
        cout<<"memery is free for node with data"<<val<<endl;

    }


};

void print(Node * head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"-> ";
        head=head->next;

    }
    cout<<"NULL"<<endl;

}
void insertAtHead(Node * &head , int d)
{

    Node * temp = new Node(d);
    temp->next=head;
    head=temp;

}

void insertAtTail(Node * &tail , int d)
{


    Node * temp = new Node(d);
    tail->next=temp;
    tail=tail->next;

}

void insertAtPosition(Node * &head ,Node * &tail, int pos , int d){

    if(pos==1)
    {
        insertAtHead(head,d);
    }
    Node * temp = head;
    while(pos-1>1)
    {
        pos--;
        temp=temp->next;
       

    }

    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
    }

    Node * nodeToInsert= new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;




}

void deleteNode(Node * &head,int pos)
{

      Node *temp=head;

    if(pos==1)
    {
        head=head->next;
        temp->next=NULL;
        delete temp;
      
    }
    else{
        Node * prev=NULL;

        while(pos>1)
        {
            prev=temp;
            temp=temp->next;
            pos--;
        }

        prev->next=temp->next;
        temp->next=NULL;
        delete(temp);


    }


    

}

//Above are Few Basic operations like insertion , deletion and printing
//Lets move to the qoestions 

// Question 1 : reverse a linked list by iterative method 

Node * reverseList(Node * head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node * prev=NULL;
    Node * curr=head;
    Node * forward = NULL;

    while(curr!=NULL)
    {
        forward=curr->next;

        curr->next=prev;
        prev=curr;
        curr=forward;

    }

    return prev;

}

// Question2 : recursive Approach of reverse linked list 
  void reverseListNew(Node * & head , Node * curr, Node * prev)
{

    if(curr==NULL)
    {
        head=prev;
        return;
    }

    Node * forward=curr->next;
    reverseListNew(head,forward, curr);
    curr->next=prev;


    
}


Node * reverseListNew1(Node * head)
{
    Node * prev=NULL;
    Node * curr=head;
    

    reverseListNew(head , curr , prev);
    return head;


}

// Question 3 : Get middle of linked list
 Node * getMiddle(Node * head)
 {

    Node * slow = head;
    Node * fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow ;


 }






int main(){


    Node * newNode =new Node(10);

    Node* head=newNode;
    Node* tail=newNode;

    
    print(head);
    insertAtHead(head,12);
    insertAtHead(head,13);
    insertAtHead(head,14);
    print(head);

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);

    print(head);

    insertAtPosition(head,tail,2,45);
    print(head);

    deleteNode(head,1);
    print(head);

    deleteNode(head,3);
    print(head);

    //at this stage linked list is : 45-> 13-> 10-> 20-> 30-> 40-> NULL


    // Node * ans = reverseList(head);
    // print(ans);

    // Node * ans2 = reverseListNew1(head);
    // print(ans2);

    deleteNode(head,2);
    print(head);
    

    Node * middle = getMiddle(head);
    cout<<middle->data<<endl;






return 0;
}
