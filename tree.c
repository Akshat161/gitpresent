#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};


struct node* newNode(int data)
{
	
	struct node* node
		= (struct node*)malloc(sizeof(struct node));

	
	node->data = data;

	
	node->left = NULL;
	node->right = NULL;
	return (node);
}

void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

int main()
{
	
	struct node* root = newNode(1);

	
	root->left = newNode(2);
	root->right = newNode(3);

	
	root->left->left = newNode(4);

	
inorder(root);
	getchar();
	return 0;
}
