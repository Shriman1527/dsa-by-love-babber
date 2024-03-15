#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

// Constructor
    Node(int data )
    {
        this->data=data;
        this->next=NULL;

    }

// Destructor
    ~Node(){
        int value = this-> data;
        if(this->next !=NULL)
        {
            delete next;
         this -> next= NULL;

        }
        cout<<"Memory is free for node with data"<< value<<endl;

    }

};

void insertatHead(Node* & head , int d )
{
    //new node create
    Node * temp = new Node(d);
    temp->next=head;
    head=temp;


}

void insertatTail(Node* & tail , int d)
{
      //new node create
    Node * temp = new Node(d);
    tail->next= temp;
    tail=tail->next;

}

void insertatPosition(Node * &head, Node * & tail,int position , int d)
{
    // Node* temp= new Node(d);
    // for(int i=0;i<position-1;i++)
    // {
    //     temp=temp->next;

    // }
    if(position==1)
    {
        // to insert at start
        insertatHead(head,d);
        return ;

    }

    Node * temp= head;
    int cnt=1;

    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
        
    }

//inserting at last position
    if(temp->next==NULL)
    {
        insertatTail(tail ,d);
        return;

    }
    Node * nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next=nodeToinsert;



}

void deleteNode(Node* & head, Node* & tail ,int position)
{
    // deleting start node 
    if(position ==1)
    {
        Node * temp = head;

        head= head->next;
        // memeory free start node 
        temp->next=NULL;

        delete temp;
    }
    else
    {
        // deleting any middle or last node
        Node * curr = head;
        Node * prev = NULL;

        int cnt =1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;

        }
    if(curr->next==NULL)
    {
        tail=prev;

    }

        prev->next= curr->next;
        curr->next=NULL;

        delete curr;





    }
}

void deleteNodeVal(Node* &head , Node * & tail, int val)
{
    Node * temp = head;
     Node * prev = NULL;
   int count=1;
   while(temp->data != val)
   {
    prev = temp;
    temp=temp->next;

   }
   cout<<"Deleted ele is "<< temp->data<< endl;

   prev->next=temp->next;

   temp->next = NULL;
   delete temp;


   

   


    
}

void print(Node * &head)
{
  Node*temp= head;

  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;

  }
  cout<<endl;

}
int main(){

// created a newnode
Node * node1= new Node(10);
// cout<< node1->data<<endl;
// cout<< node1-> next<<endl;

//head pointed to node1

Node * head = node1;

Node * tail = node1;


print(head);


// insertatHead(head , 12);

insertatTail(tail,11);
print(head);



// insertatHead(head , 15);


insertatTail(tail,12);
print(head);

insertatPosition(head ,tail , 4, 15);
print(head);

cout<<"Head is "<<head->data<<endl;
cout<<"tail is " <<tail->data<<endl;

// deleteNode(head,tail,4);

print(head);

cout<<"Head is "<<head->data<<endl;
cout<<"tail is " <<tail->data<<endl;

deleteNodeVal(head, tail ,12);

print(head);


return 0;
}

