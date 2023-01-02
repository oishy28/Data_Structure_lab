/* C++ program to print levels
line by line */
#include <bits/stdc++.h>
using namespace std;

// A Binary Tree Node
struct node
{
	struct node *left;
	int data;
	struct node *right;
};

// Function to do level order
// traversal line by line
void levelOrder(node *root)
{
	if (root == NULL) return;

	// Create an empty queue for
	// level order traversal
	queue<node *> q;

	// to store front element of
	// queue.
	node *curr;

	// Enqueue Root and NULL node.
	q.push(root);
	q.push(NULL);

	while (q.size() > 1)
	{
		curr = q.front();
		q.pop();

		// condition to check
		// occurrence of next
		// level.
		if (curr == NULL)
		{
		q.push(NULL);
		cout << "\n";
		}

		else {

			// pushing left child of
			// current node.
			if(curr->left)
			q.push(curr->left);

			// pushing right child of
			// current node.
			if(curr->right)
			q.push(curr->right);

			cout << curr->data << " ";
		}
	}
}

// Utility function to create a
// new tree node
node* newNode(int data)
{
	node *temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

// Driver program to test above
// functions
int main()
{

	// Let us create binary tree
	// shown above
	node *root = newNode(50);
	root->left = newNode(75);
	root->right = newNode(25);
	root->left->left = newNode(29);
	root->left->right = newNode(45);
	root->right->right = newNode(60);
	root->right->right = newNode(10);

	levelOrder(root);
	return 0;
}

// This code is contributed by
// Nikhil Jindal.
