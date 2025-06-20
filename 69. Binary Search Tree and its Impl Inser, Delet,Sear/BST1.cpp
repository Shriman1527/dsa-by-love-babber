#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node* right;

    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }

};
Node* insertIntoBST(Node* &root, int d)
{
    //base case 
    if(root==NULL)
    {
        root=new Node(d);
        return root ;

    }

    if(d>root->data)
    {
        //right part insert 
        root->right=insertIntoBST(root->right,d);

    }
    else{
        //left part
        root->left=insertIntoBST(root->left,d);

    }

    return root;




}
void takeInput(Node*& root){
    int data;
    cin>>data;
    while(data!=-1){
        insertIntoBST(root,data);
        cin>>data;

    }
    cout<<"done"<<endl;
}
void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {
        Node *temp=q.front();
        
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

void inorder(Node* root){
    //base case
    if(root==NULL)
    {
        return ;

    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);


}

void preorder(Node* root){
    //base case
    if(root==NULL)
    {
        return ;

    }
    cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);


}
void postorder(Node* root){
    //base case
    if(root==NULL)
    {
        return ;

    }
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";


}
Node* minVal(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;

    }
    return temp;

}

Node* maxVal(Node* root)
{
    Node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;

    }
    return temp;

}
Node * deleteFromBST(Node* root, int value)
{
    //base case
    if(root==NULL)
    return root;

    if(root->data==value)
    {
        // 0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;

        }


        //1 child
        //left child
        if(root->left!=NULL && root->right==NULL)
        {
          Node * temp=root->left;
          delete  root;
          return temp;
        }

        //right child
        if(root->left==NULL && root->right!=NULL)
        {
          Node * temp=root->right;
          delete  root;
          return temp;
        }



        //2 child
        if(root->left!=NULL && root->right!=NULL)
        {
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right, mini);
            return root;


        }


    }
    else if(root->data>value)
    {
        //left part
        root->left=deleteFromBST(root->left,value);
        return root;

    }
    else{
        //right part
        root->right=deleteFromBST(root->right,value);
        return root;
    }
}

void inorderPreSuc(Node* root,Node*& pre,Node*&suc, int value)
{
    if(root==NULL)
    return ;

    if(root->data==value)
    {
        //maximum value in left subtree
        if(root->left!=NULL)
        {
            Node* temp=root->left;
            while(temp->right)
            temp=temp->right;

            pre=temp;

        }

        //min value in right subtree
        if(root->right!= NULL)
        {
            Node* temp=root->right;
            while(temp->left)
            {
                temp=temp->left;
            }

            suc=temp;

        }
        return ;

    }

    if(root->data>value)
    {
        suc=root;
        inorderPreSuc(root->left,pre,suc,value);


    }
    else{
        pre=root;
        inorderPreSuc(root->right,pre,suc,value);

    }
}
int main(){

    Node *root=NULL;
    cout<<"Enter the data to create BST"<<endl;

    takeInput(root);

    cout<<"Priting the BST"<<endl;

    levelOrderTraversal(root);
    cout<<endl;


    cout<<"Inorder Traversal"<<endl;

    inorder(root);
    cout<<endl;


    cout<<"Preorder Traversal"<<endl;

    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal"<<endl;

    postorder(root);
    cout<<endl;


    cout<<"Min val is"<<minVal(root)->data<<endl;

    cout<<"Max val is"<<maxVal(root)->data<<endl;


    //deletion of BST;

    root= deleteFromBST(root,50);
     cout<<"Priting the BST"<<endl;

    levelOrderTraversal(root);
    cout<<endl;


    cout<<"Inorder Traversal"<<endl;

    inorder(root);
    cout<<endl;


    cout<<"Preorder Traversal"<<endl;

    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal"<<endl;

    postorder(root);
    cout<<endl;


    cout<<"Min val is"<<minVal(root)->data<<endl;

    cout<<"Max val is"<<maxVal(root)->data<<endl;

    cout<<"Inorder Predesessor and Successor will be :"<<endl;
    Node * pre=NULL;
    Node* suc=NULL;
    int value=20;
    inorderPreSuc(root,pre,suc,value);

    if(pre!=NULL)
    {
        cout<<"Predessor of"<<value<<"is"<<pre->data<<endl;

    }
    else{
        cout<<"not found pre"<<endl;

    }
    if(suc!=NULL)
    {
        cout<<"Successsor of"<<value<<"is"<<suc->data<<endl; 
    }
    else
    {
        cout<<"not found suc"<<endl;
        
    }



    



return 0;
}
