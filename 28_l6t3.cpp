#include<iostream>
using namespace std;
class BST {
  struct node {
    int data;
    node * left;
    node * right;
  };
  node * root;
  node * destructor(node * t) {
    if (t == NULL)
      return NULL; {
      destructor(t -> left);
      destructor(t -> right);
      delete t;
    }
    return NULL;
  }
  node * insert(int x, node * t) {
    if (t == NULL) {
      t = new node;
      t -> data = x;
      t -> left = t -> right = NULL;
    } else if (x < t -> data && (((t->data) - x) > 3))
      t -> left = insert(x, t -> left);
    else if (x > t -> data && ((x-(t->data)) > 3) )
      t -> right = insert(x, t -> right);
    return t;
  }
  node * findMin(node * t) {
    if (t == NULL)
      return NULL;
    else if (t -> left == NULL)
      return t;
    else
      return findMin(t -> left);
  }
  node * findMax(node * t) {
    if (t == NULL)
      return NULL;
    else if (t -> right == NULL)
      return t;
    else
      return findMax(t -> right);
  }


  int maxHeight(node* t)
  {
    if (t == NULL)
            return 0;
        else {

            int lHeight = maxHeight(t->left);
            int rHeight = maxHeight(t->right);


            if (lHeight > rHeight)
                return (lHeight + 1);
            else
                return (rHeight + 1);
        }
  }


  public:
    BST() {
      root = NULL;
    }
    ~BST() {
      root = destructor(root);
    }
  void insert(int x) {
    root = insert(x, root);
  }


  void MaximumSoldiers(int x)
  {
    x=maxHeight(root);
    cout<<x-1;
  }
};
int main() {
  BST t;
  int i;
  while (true) {
    cin >> i;
    if (i == -1) break;
    t.insert(i);
  }
  t.MaximumSoldiers(i);

  return 0;
}
