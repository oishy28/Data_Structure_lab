#include<iostream>
using namespace std;
//sorted array to bst

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* sortedArrayToBST(int arr[], int start, int end)
{
    if(start>end)
    {
        return NULL;
    }
    int mid = (start + end)/2;
    Node* root = new Node(arr[mid]);
    root->left = sortedArrayToBST(arr,start,mid-1);
    root->right = sortedArrayToBST(arr,mid+1,end);

    return root;

}

void print(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);

}
int main()
{
    /*int m,i=0;
    cin>>m;

    int arr[m];

    while(m--)
    {
        cin>>arr[i];
        i++;
    }*/

    int arr[] = {1,2,3};

    Node* root = sortedArrayToBST(arr,0,2);

    print(root);
    return 0;
}
