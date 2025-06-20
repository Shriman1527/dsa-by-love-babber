#include<iostream>
#include<map>
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

void print(Node * head)
{
  Node*temp= head;

  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;

  }
  cout<<endl;

}

bool check_circular(Node * head)
{
    cout<<"call"<<endl;

    if(head==NULL)
    return 1;


    if(head->next==NULL)
    return 0;

    Node * temp=head->next;

    
    while(temp!=NULL && temp!=head)
    {
        temp=temp->next;

    }
    if(temp==head)
    {
 return 1;
    }
   
    
    return 0;


}

bool detectLoop(Node* head){
    if(head==NULL){
        return false;

    }

    map<Node* ,bool> visited;
    Node * temp =head;
    while(temp !=NULL)
    {
        if(visited[temp]==true)
        return true;

        visited[temp]=true;
        temp=temp->next;
    }
    return false;


}

//function to detect loop present or not 

Node* floydDetectionLoop(Node * head){

    if(head==NULL)
    return NULL;

    Node * slow= head;
    Node * fast= head;

    while(slow!=NULL && fast!=NULL)
    {
       
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;

        }
        slow=slow->next;
        if(slow==fast){
            cout<<"Loop is Present at slow -> data"<<slow->data<<endl;
            return slow;

        }

    }
    return NULL;

}


// function to get stering node in the loop
Node * getStartingNode(Node * head){
    if(head==NULL)
    {
        return NULL;
    }

    Node* intersection = floydDetectionLoop(head);
    Node* fast= intersection;

    Node* slow = head;
    while(slow !=intersection)
    {
       
        slow=slow->next;
        intersection=intersection->next;


    }

    return slow;

}

void removeLoop(Node * head){

    if(head==NULL)
    return ;

    Node * startOfLoop= getStartingNode(head);
    Node * temp = startOfLoop;

    while(temp->next!=startOfLoop)
    {
        temp=temp->next;

    }
    temp->next=NULL;

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
insertatTail(tail,17);
insertatTail(tail,19);

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

bool ans = check_circular(head);
cout<<"answer"<< ans <<endl;


print(head);

//The following statement makes Loop in LL
tail->next=head->next;


//Check for loop is present or not 
// bool answer= detectLoop(head);
// cout<<"The given linked list has loop or not : "<< answer <<endl;

//Another Method to detect loop in the LL
Node* answer2 = floydDetectionLoop(head);
cout<<"The given linked list has loop or not : "<< answer2->data <<endl;

cout<<"Starting node of the loop is : "<<getStartingNode(head)->data<<endl;


//Out task is remove the loop in LL
removeLoop(head);
// print(head);
cout<<"Loop is present or not :"<<floydDetectionLoop(head)<<endl;
//This is how we remove loop in the LL
print(head);



return 0;

}

