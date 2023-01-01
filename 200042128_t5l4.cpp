#include <iostream>
#include<queue>

using namespace std;

int main()
{
   queue<int> q1;
   queue<int> q2;

   int n,k1,k2,ct=0;

   cin>>n;
    for( int i=0;i<n;i++)
   {
       cin>>k2;
       q2.push(k2);
   }
   for( int i=0;i<n;i++)
   {
       cin>>k2;
       q2.push(k2);
   }
   while(!q2.empty())
   {
       if(q1.front()==q2.front())
       {
           q1.pop();
           q2.pop();
           ct=0;
       }
       else if(ct>q1.size())
       {
           break;
       }
       else{
        q1.push(q1.front());
        q1.pop();
        ct++;
       }
   }
   cout<<q1.size()<<endl;
}
