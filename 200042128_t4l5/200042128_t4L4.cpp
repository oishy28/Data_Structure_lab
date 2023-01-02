#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;
    int n;
    while(1)
    {
        cin>>n;
        q.push(n);
        if(n==-1)
        {
            break;
        }
    }

    int k;
    cin>>k;
    int count=0;

    while(k!=0 || q.front()!=1)
    {
        if(k==0)
        {
            q.push(q.front()-1);
            q.pop();

            k=q.size()-1;

        }
        else if(q.front()==1)
        {
            q.push(q.front()-1);

                q.pop();
                k--;

        }
        else{
            q.push(q.front()-1);
            q.pop();
            k--;
        }
        count++;
    }

    cout<<count;
}
