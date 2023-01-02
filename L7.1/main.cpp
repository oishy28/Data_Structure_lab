#include<iostream>
#include<stack>
using namespace std;
bool checkPreorder(int arr[], int n)
{
  stack<int> stack;

  int root=0;

  for (int i=0; i<n; i++)
  {

    if (arr[i] < root)
      return false;

    while (!stack.empty() && stack.top()<arr[i])
    {
      root = stack.top();
      stack.pop();
    }

    stack.push(arr[i]);
  }
  return true;
}
int main()
{
  int a[] = {5,2,1,3,6};
  int n = sizeof(a)/sizeof(a[0]);
  if(checkPreorder(a, n))
  {
    cout << "Valid Preorder Sequence\n";
  }
  else
  {
    cout << "Invalid Preorder Sequence\n";
  }



  int b[] = {5,2,6,1,3};
  n = sizeof(b)/sizeof(b[0]);
  if(checkPreorder(b, n))
  {
    cout << "Valid Preorder Sequence\n";
  }
  else
  {
    cout << "Invalid Preorder Sequence\n";
  }
  return 0;
}
