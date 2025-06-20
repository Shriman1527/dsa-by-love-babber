#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }

};

node* buildTree(node * root)
{
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root= new node(data);

    if(data==-1)
    {
        return NULL;

    }

    cout<<"Enter the data for inserting in the left"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data for inserting in the right"<<data<<endl;
    root->right=buildTree(root->right);

    return root;


}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {
        node *temp=q.front();
        
        q.pop();

        if(temp==NULL){ //purana level complete traverse ho chuka hai 
          cout<<endl;
          if(!q.empty()) // queue still has some child nodes
          {
              q.push(NULL);
          }
        }
        else{
              cout<<temp->data<<" ";
             
        if(temp->left)
        {
            q.push(temp->left);

        }
        if(temp->right)
        {
            q.push(temp->right);
            
        }

        }
       

    }


}

void reverseLevelOrder(node* root)
{
   queue<node*> q;
   stack<node*>st;

    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {
        node *temp=q.front();
        
        q.pop();

        if(temp==NULL){ //purana level complete traverse ho chuka hai 
          cout<<endl;
          if(!q.empty()) // queue still has some child nodes
          {
              q.push(NULL);
          }
        }
        else{
            //   cout<<temp->data<<" ";
            st.push(temp);

             
        if(temp->left)
        {
            q.push(temp->left);

        }
        if(temp->right)
        {
            q.push(temp->right);
            
        }

        }

    
       

    }

         while(st.empty()==false)
    {
        
        node * temp=st.top();
        if(temp==NULL)
       

        cout<<temp->data<<" ";
        st.pop();
        

    }

   
}

void preorder(node* root){

    //NLR
      if(root==NULL)
    {
        return ;

    }
    stack<node*> st;
    st.push(root);
    // st.pop();

    while(!st.empty())
    {
        node * temp = st.top();
        cout<<temp->data<<" ";
        st.pop();
        if(temp->right)
        {
            st.push(temp->right);
        }
        if(temp->left)
        {
            st.push(temp->left);
        }
    }

}

void inorder(node* root){

    stack<node*> st;
    node * current=root;

while(current!=NULL || !st.empty())
{


    while(current!=NULL)
    {
        st.push(current);
        current=current->left;

    }
   current=st.top();
    st.pop();
    cout<<current->data<<" ";

    current=current->right;




}

   

  

   

}

void postorder(node* root){

    //NLR
      if(root==NULL)
    {
        return ;

    }
    stack<node*> st1;
    stack<node*>st2;
    st1.push(root);
    // st.pop();

    while(!st1.empty())
    {
        node * temp = st1.top();
        st2.push(st1.top());

        // cout<<temp->data<<" ";
        st1.pop();
       if(temp->left)
        {
            st1.push(temp->left);
        }
         if(temp->right)
        {
            st1.push(temp->right);
        }
    }
    while(!st2.empty())
    {

        cout<<st2.top()->data<<" ";
        st2.pop();
        }

}
int main(){

     node *root=NULL;

   // creating a tree
     root=buildTree(root);

     cout<<"Prnting level order traversal"<<endl;

     levelOrderTraversal(root);

     cout<<"Prnting reverse level order traversal"<<endl;

    //  reverseLevelOrder(root);

    cout<<"Prnting preorder traversal"<<endl;

     preorder(root);

     cout<<"Prnting inorder traversal"<<endl;

     inorder(root);

     cout<<"Prnting postorder traversal"<<endl;

     postorder(root);



     




return 0;
}
