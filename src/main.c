#include <stdio.h>
#include <stdlib.h>


struct node{
int data;
struct node*left;
struct node*right;
};

struct node* createnode(int data){
struct node*p;
p=(struct node*)malloc(sizeof(struct node));
p->data=data;
p->left=NULL;
p->right=NULL;

return p;//adress of new node
 }
void preorder(struct node*root){

if(root!=NULL){

printf("%d\n",root->data);
preorder (root->left);
preorder(root->right);
    }

 }
 void postorder(struct node*root){

if(root!=NULL){


postorder (root->right);
postorder(root->left);
printf("%d\n",root->data);
    }

 }
 void inorder(struct node*root){

if(root!=NULL){


inorder (root->left);
printf("%d\n",root->data);
inorder(root->right);
    }

 }
 


int main() {

 struct node*p= createnode( 2);
 struct node*p1= createnode( 1);
 
struct node*p2= createnode( 4);

p->left=p1;
p->right=p2;
 //sending the pointer/adress that is head
 preorder(p);
 postorder(p);
 inorder(p);
    return 0;
    
}