
#include<iostream>
using namespace std;

class BST {

    struct node {
        int data;
        node* left;
        node* right;
    };

    node* root;

    node* insert(int key, node* root)
    {

        if(root == NULL)
        {
            root = new node;
            root->data = key;
            root->left = root->right = NULL;
        }
        else if(key < root->data && (((root->data) - key) > 3))
            root->left = insert(key, root->left);
        else if(key > root->data && ((key-(root->data)) > 3))
            root->right = insert(key, root->right);
            else
            {
                cout<<"(Reservation Failed)";
            }

        return root;
    }


    void inorder(node* root) {
        if(root == NULL)
            return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
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


    void insert(int x) {
        root = insert(x, root);
    }

    void display() {
        inorder(root);
        cout << endl;
    }

    void search(int x) {
        root = find(root, x);
    }
};
 int main()
{


    BST time;


    while(true){
        int x;
        cin>>x;
        if(x == -1){
            break;
        }
        time.insert(x);
         time.display();

    }





    return 0;
}
