#include<bits/bits/stdc++.h>
using namespace std;

struct Splay
{
    int key;
    Splay* left;
    Splay* right;
};

class SplayTree
{
public:
    Splay* rr_rotate(Splay* key2)
    {
        Splay* key1 = key2-> left;
        key2->left = key1->right;
        key1->right = key2;
        return key1;
    }

    Splay* ll_rotate(Splay* key2)
   {
      Splay* key1 = key2->right;
      key2->right = key1->left;
      key1->left = key2;
      return key1;
   }
   turn k1;
   }
   Splay* S(int value, Splay* root)
   {
      if (!root)
      return NULL;
      Splay head;
      head.left= head.right = NULL;
      Splay* LeftTreeMax = &head;
      Splay* RightTreeMin = &head;
      while (1)
      {
         if (value < root->key)
         {
            if (!root->left)
            break;
            if (value< root->left->key)
            {
               root = rr_rotate(root);
               if (!root->left)
               break;
            }
            RightTreeMin->left= root;
            RightTreeMin = RightTreeMin->left;
            root = root->left;
            RightTreeMin->left = NULL;
         }
         else if (value> root->key)
         {
            if (!root->right)
            break;
            if (value > root->right->key)
            {
               root = ii_rotate(root);
               if (!root->right)
               break;
            }
            LeftTreeMax->right= root;
            LeftTreeMax = LeftTreeMax->right;
            root = root->right;
            LeftTreeMax->right = NULL;
         }
         else
         break;
      }
      LeftTreeMax->right = root->left;
      RightTreeMin->left = root->right;
      root->left = head.right;
      root->right = head.left;
      return root;
   }

      Splay* Insert(int value, Splay* root)
   {
      static Splay* p_node = NULL;
      if (!p_node)
      p_node = New_Node(key);
      else
      p_node->key = value;
      if (!root)
      {
         root = p_node;
         p_node = NULL;
         return root;
      }
      root = S(value, root);
      if (value < root->key)
      {
         p_node->left= root->left;
         p_node->right = root;
         root->left = NULL;
         root = p_node;
      }
      else if (key > root->k)
      {
         p_node->right = root->right;
         p_node->left = root;
         root->right = NULL;
         root = p_node;
      }
      else
      return root;
      p_node = NULL;
      return root;
   }

   Splay* Delete(int value, Splay* root)//delete node
   {
      Splay* temp;
      if (!root)//if tree is empty
      return NULL;
      root = S(value, root);
      if (value != root->key)//if tree has one item
      return root;
      else
      {
         if (!root->left)
         {
            temp = root;
            root = root->right;
         }
         else
         {
            temp = root;
            root = S(value, root->left);
            root->right = temp->right;
         }
         free(temp);
         return root;
      }
   }
};



int main()
{


}
