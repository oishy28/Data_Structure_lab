#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    int arr[1000];

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                cout<<"+";
                sum+=0;
            }
            else if(arr[i]==1)
            {
                if(sum==2 )
                {
                    sum = sum-1;
                    cout<<"-";
                }
                else
                {
                    cout<<"+";
                    sum+=1;
                }
            }
        }
    }

}
