#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node*create(int data)
{
	
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
void postorder(struct node*node)
{
	if (node==NULL)
		return ;
	postorder(node->left);
	postorder(node->right);
	printf ("%d ",node->data);
}
void inorder(struct node*node)
{
	if (node==NULL)
		return ;
	inorder(node->left);
	printf ("%d ",node->data);
	inorder(node->right);
	
}
void preorder(struct node*node)
{
	if (node==NULL)
		return ;
		printf ("%d ",node->data);
	preorder(node->left);
	preorder(node->right);
}
int main()
{
	struct node*root=create(61);
	root->left=create(25);
	root->right=create(83);
	root->left=create(55);
	root->right=create(93);
	root->left->left=create(49);
	printf ("\n preorder:");
	preorder(root);
	printf ("\n inorder:");
	inorder(root);
	printf ("\n postorder:");
	postorder(root);
	return 0;
}
