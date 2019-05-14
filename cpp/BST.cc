#include<iostream>
using namespace std;
struct node
{

    int data;
    node *left,*right;

};

node* newNode(int key)
{
    node *root=new node();
    root->data=key;
    root->left=root->right=NULL;
    return root;


}

void inorder(node * root)
{

if(root==NULL)return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void find(node * root,int k)
{
if(root==NULL)return;
if(root->data==k)
    cout<<endl<<k<<" "<<"found";
else if(root->data<k)
    find(root->right,k);
else find(root->left,k);
}

int main()
{
node * root=newNode(30);
root->left=newNode(10);
root->left->left=newNode(5);
root->left->right=newNode(20);
root->right=newNode(40);
root->right->left=newNode(35);
root->right->right=newNode(50);
inorder(root);
find(root,50);
}
