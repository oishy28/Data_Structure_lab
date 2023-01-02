#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
   priority_queue<int, vector<int>, greater<int> > p;
   int n,k;
   int c,count=0;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   {

        cin>>c;
        p.push(c);

   }
   while(p.size()>1)
   {
    count++;

    int value=p.top();
    p.pop();
    int value2=p.top();
    p.pop();
    int result=value+2*value2;
    p.push(result);
    //cout<<p.top();
    if(p.top()>=k)
    {
        cout<<count;
        return 0;


    }
   }

   //cout<<p.top();



}
