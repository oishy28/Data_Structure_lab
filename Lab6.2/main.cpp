#include<bits/stdc++.h>
using namespace std;

class BST{
    struct Node
    {
        int data;
        struct Node *left, *right;
    };

    Node * root;

/*void inorder(Node * tree)
{
    if(tree != NULL)
    {
        inorder(tree->left);
        cout << tree->data << " ";
        inorder(tree->right);
    }
}*/

int maxDepth(Node * tree)
{
    if(tree == NULL)
    {
        return 0;
    }
    else{
        int leftDepth = maxDepth(tree->left);
        int rightDepth = maxDepth(tree->right);

        //larger one
        if(leftDepth > rightDepth)
        {
            return (leftDepth+1);
        }
        else{
            return (rightDepth+1);
        }
    }
}

void LevelOrder(Node * tree)
{
    int height = maxDepth(tree);
    for(int i=1; i<=height; i++)
    {
        currentLevel(tree, i);
    }
}

void currentLevel(Node * tree, int level)
{
    if(tree == NULL)
    {
        return;
    }
    if(level == 1)
    {
        cout << tree->data << " ";
    }
    else if(level > 1)
    {
        currentLevel(tree->left, level-1);
        currentLevel(tree->right, level-1);
    }
}

Node *Insert(Node * tree, int value)
{
    if(tree == NULL)
    {
        tree = new Node;
        tree->data = value;
        tree->left = tree->right = NULL;
    }
    else if(value < tree->data && (((tree->data)-value) > 3))
    {
        tree->left = Insert(tree->left, value);
    }
    else if(value > tree->data && ((value-(tree->data)) > 3))
    {
        tree->right = Insert(tree->right, value);
    }
    return tree;
}

Node *Find(Node *tree, int value)
{
    if(tree == NULL)
    {
        return NULL;
    }
    else if(value < tree->data)
    {
        return Find(tree->left, value);
    }
    else if(value > tree->data)
    {
        return Find(tree->right, value);
    }
    return tree;
}

public:
    BST()
    {
        root = NULL;
    }

    void Insert(int value)
    {
        root = Insert(root, value);
    }

    void display()
    {
        LevelOrder(root);
        cout << endl;
    }

    void Search(int value)
    {
        root = Find(root, value);
    }
};


int main()
{
    BST tree;

    while(true)
    {
        int value;
        cin >> value;
        if(value == -1)
        {
            break;
        }
        tree.Insert(value);
    }
    tree.display();
    return 0;
}
