#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
	int data;
	struct Node *left, *right;
} * tr[100];

int level = 0;
int qfront = 0;
int qrear = 0;

int line[100];
int lindex = 0;
int output[100][100];
int outputlevel = 0;
int outputcolumn = 0;

void playWithArray(int level)
{
	if (level == 0)
	{
		output[level][outputcolumn] = 1;
		return;
	}
	for (int i = 0, j = pow(2,level) - 1; i < pow(2,level) / 2, j >= pow(2,level) / 2; i++, j--)
	{
		output[level][outputcolumn++] = line[i];
		output[level][outputcolumn++] = line[j];
	}
}

void printLevelOrder(struct Node *root)
{
	
	if (root == NULL)
		return;

	myQ[qrear++] = root;

	while (q_front != q_rear)
	{

		int nodeCount = qrear - qfront;
		for (int i = 0; i < nodeCount; i++)
		{
			struct Node *node = myQ[qfront];
			line[lindex++] = node->data;
			qfront++;
			if (node->left != NULL)
				myQ[qrear++] = node->left;

			if (node->right != NULL)
				myQ[qrear++] = node->right;
		}

		printf("\n");
		playWithArray(level);
		level++;
		outputcolumn = 0;
		lindex = 0;
	}
}


struct Node *newNode(int data)
{

	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}


int main()
{
	
	struct Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->left->left->left = newNode(8);
	root->left->left->right = newNode(9);
	root->left->right->left = newNode(10);
	root->left->right->right = newNode(11);
	root->right->left->left = newNode(12);
	root->right->left->right = newNode(13);
	root->right->right->left = newNode(14);
	root->right->right->right = newNode(15);
	
	printLevelOrder(root);

	for (int i = 0; i < level; i ++){
		for (int j = 0; j < pow(2,i); j ++){
			printf("%d, ", output[i][j]);
		}
	}
	printf("\n");
	for (int i = level -1 ; i >= 0; i--)
	{
		for (int j = 0; j < pow(2, i); j++)
		{
			printf("%d, ", output[i][j]);
		}
	}
	return 0;
}
