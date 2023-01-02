#include <iostream>
#include<queue>

using namespace std;

int main()
{
   queue<int> q;
   int n,k;
   cin>>n>>k;
   for(int i=1;i<=n;i++)
    {
        q.push(i);
    }

   while(q.size()>1)
   {

       for(int i=0;i<k-1;i++)
       {
           int temp= q.front();
           q.pop();
           q.push(temp);
       }
       q.pop();

   }
   cout<<q.front();
}
