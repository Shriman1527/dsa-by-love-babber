#include<iostream>
#include<stack>
using namespace std;
class node{
 public:
 int data;
 node * left;
 node * right;

 node (int d)
 {
    this-> data=d;
    this->left=NULL;
    this->right=NULL;


 }

};

node* buildTree(node* root )
{
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
    return NULL;
    }

    cout<<"Enter the data for left of "<<data<<endl;
    root->left= buildTree(root->left);
    cout<<"Enter the data for right of "<<data<<endl;
    root->right=  buildTree(root->right);

    return root;



}

void preorder(node* root){
    if(root==NULL)
    {
        return ;
    }
    //NLR
    stack<node*>st;
    st.push(root);

    while(!st.empty())
    {
        node* temp=st.top();
        cout<< temp->data <<" ";

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

void inorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    //LNR
    stack<node*>st;
    node* current=root;
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

//postorder traversal using 2 stacks
void postorder(node * root)
{
    if(root==NULL)
    {
        return ;

    }
}


int main(){
    node * root=NULL;

    root=buildTree(root);

    preorder(root);
    cout<<endl;

    inorder(root);


    


return 0;
}
