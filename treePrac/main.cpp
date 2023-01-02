#include<bits/stdc++.h>
#include<queue>

using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->data = val;

        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(Node* root)
{
    cout<<"Enter data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data==-1)
    {
        return NULL;
    }
    cout << "Enter Left"<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter Right"<<endl;
    root->right=buildTree(root->right);
}
void levelordertraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    //seperator
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp =q.front();

        q.pop();
        if(temp==NULL)//level complete
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
                cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }}
    }
}
int main()
{
    Node* root = NULL;
    root = buildTree(root);
    levelordertraversal(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

   // root->left=new Node(2);
    //root->right = new Node(3);

   // root->left->left = new Node(4);

    return 0;
}
