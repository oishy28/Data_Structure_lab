#include<iostream>
using namespace std;

class BST {

    struct node {
        int data;
        node* left;
        node* right;
    };

    node* root;

    node* insertIntoBST(int key, node* root)
    {

        if(root == NULL)
        {
            root = new node;
            root->data = key;
            root->left = root->right = NULL;
        }
        else if(key < root->data)
            root->left = insertIntoBST(key, root->left);
        else if(key > root->data)
            root->right = insertIntoBST(key, root->right);

        return root;
    }


    void preorder(node* root) {
        if(root == NULL)
            return;
            cout << root->data << " ";
        preorder(root->left);

        preorder(root->right);
    }

    node* find(node* root, int x) {
        if(root == NULL)
            return NULL;
        else if(x < root->data)
            return find(root->left, x);
        else if(x > root->data)
            return find(root->right, x);
        else
            return root;
    }

public:
    BST() {
        root = NULL;
    }


    void insertIntoBST(int x) {
        root = insertIntoBST(x, root);
    }

    void display() {
        preorder(root);
        cout << endl;
    }

    void search(int x) {
        root = find(root, x);
    }
};
 int main()
{


    BST p;


    while(true){
        int x;
        cin>>x;
        if(x == -1){
            break;
        }
        p.insertIntoBST(x);
         p.display();

    }





    return 0;
}
