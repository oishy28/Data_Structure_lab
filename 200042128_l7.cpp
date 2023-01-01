#include<iostream>
#include<stack>
using namespace std;
bool checkIfPreorder(int arr[], int n)
{
  stack<int> s1;

  int root=0;

  for (int i=0; i<n; i++)
  {

    if (arr[i] < root)
      return false;

    while (!s1.empty() && s1.top()<arr[i])
    {
      root = s1.top();
      s1.pop();
    }

    s1.push(arr[i]);
  }
  return true;
}
int main()
{
  int n,i=0;
  cin>>n;
  int arr[n];
  while(n--)
  {
      cin>>arr[i];
      i++;
  }
  int l=sizeof(arr)/sizeof(arr[0]);
  if(checkIfPreorder(arr, l))
  {
    cout << "Valid Preorder Sequence\n";
  }
  else if(!checkIfPreorder(arr,l))
  {
    cout << "Invalid Preorder Sequence\n";
  }


}
