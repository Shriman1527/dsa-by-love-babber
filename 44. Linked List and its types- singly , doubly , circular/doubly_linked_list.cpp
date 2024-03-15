#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node * prev;
    Node * next;

    // constructor
    Node (int d)
    {
        this->data = d;
        this->prev=NULL;
        this->next = NULL;
     }

     //Destructor 
    ~Node()
    {
      int val= this->data;
      if(next!=NULL)
      {
        delete next;
        next=NULL;

      }
      cout<<"Memory free for with data"<< val << endl;

    }

};

void insertatHead(Node * & head ,Node * & tail, int d)
{
   

  if(head==NULL)
  {
    Node * temp= new Node(d);
    head=temp;
    tail=temp;



  }
  else
  {
    Node * temp = new Node(d);
   temp->prev=NULL;
   temp->next= head;
   head->prev=temp;
   head=temp;
  }
  


}

void insertatTail(Node * & tail ,Node * & head , int d)
{
   if(tail==NULL)
  {
    Node * temp= new Node(d);
    tail=temp;
    head=temp;

    

  }
  else{
    Node * temp = new Node(d);

    temp->prev= tail;
    tail->next= temp;
    tail= temp;

  }
   

}

void insertatPosition(Node * & head , Node * & tail , int d, int pos)
{
    Node * newnodeinserted = new Node(d);
    Node * temp = NULL;

    Node *nextnode= head;


    int cnt=1;

    if(pos==1)
    {
        insertatHead(head, tail,d);
        return ;

    }

    while(cnt<pos)
    {
      cnt++;
    temp=nextnode;

    nextnode=nextnode->next;


    }

    if(temp->next==NULL)
    {
       insertatTail(tail,head,d);
       return ;

    }

    newnodeinserted->next= temp->next;
    nextnode->prev= newnodeinserted;

    temp->next= newnodeinserted;
    newnodeinserted->prev= temp;

}

void insertatPosition_babbar(Node * & head , Node * & tail , int d, int pos)
{
    Node * newnodeinserted = new Node(d);
    Node * temp = head;

   int cnt=1;

    if(pos==1)
    {
        insertatHead(head,tail, d);
        return ;

    }

    while(cnt<pos-1)
    {
    
    temp=temp->next;
    cnt++;
    }

    if(temp->next==NULL)
    {
       insertatTail(tail,head,d);
       return ;

    }

    newnodeinserted->next = temp->next;
    temp->next->prev = newnodeinserted;
    temp->next= newnodeinserted;
    newnodeinserted->prev= temp;
}

void deletenode(Node* & head, Node * & tail,int pos)
{

  //deleting first or start node 
  if(pos==1)
  {
    Node * temp=head;
    head= head->next;
    temp->next->prev = NULL;
   
    temp->next=NULL;


    delete temp;

  }
  else
  {
    Node * curr = head;
    Node * temp=NULL;
    int cnt=1;
    
    while(cnt<pos)
    {
      temp=curr;
      curr=curr->next;
      cnt++;

    }
    if(curr->next== NULL)
    {
      tail=temp;

    }
    curr->prev=NULL;
    temp->next= curr->next;

    curr->next=NULL;
   
   delete curr;
 }
}

// Traversing a linked list 
void print(Node * &head)
{
  Node * temp = head;

  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;

  }
  cout<<endl;

}
// find the length of linked list
int getlen(Node * head)
{
     Node * temp = head;
     int length=0;

    while (temp!=NULL)
  {
    // cout<<temp->data<<" ";
    length++;

    temp=temp->next;

  }
  return length;
  cout<<endl;
}


int main(){

// Node * node1= new Node(10);

// Node * head= node1;
// Node * tail= node1;

// If we want to start from NULL LL

Node * head= NULL;
Node * tail= NULL;

print(head);

cout<<"Length is"<< getlen(head)<< endl;


// cout<<"Head"<<head->data<<endl;
insertatHead(head,tail,11);
print(head);
cout<<"Head"<<head->data<<endl;

insertatHead(head,tail,12);
print(head);

insertatHead(head,tail,13);
print(head);
cout<<"Head"<<head->data<<endl;

insertatTail(tail , head,25);
print(head);

// insertatPosition(head, tail, 27,6);
insertatPosition_babbar(head,tail,27,3);
print(head);
cout<<"Head"<<head->data<<endl;
cout<<"Tail"<<tail->data<<endl;

deletenode( head,tail, 5);
print(head);
cout<<"Head"<<head->data<<endl;
cout<<"Tail"<<tail->data<<endl;








return 0;
}
