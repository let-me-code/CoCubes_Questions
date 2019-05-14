
#include<iostream>
using namespace std;

 struct node{
 int data;
 node *right,*left;
 };

 node* newNode(int data)
 {
     node *head=new node();
     head->data=data;
     head->left=head->right=NULL;
     return head;
 }



int height(node * head)
{

   if(head== NULL)
       return 0;

   /* If tree is not empty then height = 1 + max of left
      height and right heights */
   return 1 + max(height(head->left), height(head->right));
}


int diameter(node *head)
{

    int leftsub= height(head->left);
    int rightsub=height(head->right);
    return 1+leftsub+rightsub;
}



 int main()
 {
      node *head=newNode(20);
      head->right=newNode(50);
      head->left=newNode(15);
      head->left->left=newNode(10);
      head->left->left->left=newNode(6);
      head->left->left->right=newNode(12);
      head->left->right=newNode(17);
      cout<<diameter(head);

 }
