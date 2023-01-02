#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

Node* constructor(int x)
{
    Node* p = new Node;
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void insertNode(struct Node *root, int x)
{
    Node *p = root, *q = NULL;

    while (p != NULL)
    {
        q = p;
        if (p -> data < x)
            p = p -> right;
        else
            p = p -> left;
    }

    if (q == NULL)
        p = constructor(x);
    else
    {
        if (q -> data < x)
            q -> right = constructor(x);
        else
            q -> left = constructor(x);
    }
}
int maxelpath(Node *q, int x)
{
    Node *p = q;

    int mx = 0;

    while (p -> data != x)
    {
        if (p -> data > x)
        {
            mx = max(mx, p -> data);
            p = p -> left;
        }
        else
        {
            mx = max(mx, p -> data);
            p = p -> right;
        }
    }

    return max(mx, x);
}


int maximumElement(struct Node *root, int x, int y)
{
    Node *p = root;

    while ((x < p -> data && y < p -> data) ||
        (x > p -> data && y > p -> data))
    {

        if (x < p -> data && y < p -> data)
            p = p -> left;


        else if (x > p -> data && y > p -> data)
            p = p -> right;
    }

    return max(maxelpath(p, x), maxelpath(p, y));
}
int main()
{
    int n,j=0;
    cin>>n;
    int arr[n];

    while(n--)
    {
        cin>>arr[j];
        j++;
    }

    int a,b;
    cin>>a;
    cin>>b;

    struct Node *root= constructor(arr[0]);

    for(int i=1;i<(sizeof(arr) / sizeof(arr[0]));i++)
    {
        insertNode(root,arr[i]);
    }
     cout << maximumElement(root, a, b) << endl;

    return 0;

}

