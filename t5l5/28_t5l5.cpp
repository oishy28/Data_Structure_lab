#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> q;

    int n;
    while(cin>>n,n!=-1)
    {

        q.push(n);
    }

        while(q.size()>1)
        {
            int b=q.top();
            q.pop();
            int a=q.top();
            q.pop();

            if(a!=b)
            {
                q.push(b-a);
            }

        }
        if(q.empty())
        {
            return 0;
        }
        cout<<q.top()<<endl;

        return 0;

}
