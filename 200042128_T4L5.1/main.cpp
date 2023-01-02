// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a;
    int size,val,c=0;
    cout<<"Enter size"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        vector<int> temp;
        for(int j=0;j<2;j++)
        {
            cin>>val;
            temp.push_back(val);
        }
        a.push_back(temp);
        temp.clear();
    }

    sort(a.begin(),a.end());

    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0;i<a.size();i++)
    {
        if(pq.empty())
        {
            pq.push(a[i][1]);
        }
        else
        {
            if(pq.top()<=a[i][0])
            {
                pq.pop();
                pq.push(a[i][1]);
            }
            else
            {
                pq.push(a[i][1]);
            }
        }

    }
 cout<< pq.size()<<endl;

    return 0;

}
