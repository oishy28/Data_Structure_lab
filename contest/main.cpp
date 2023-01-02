#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long  int t,n,i,j,sum=0;
    cin>>t;


    while(t--)
    {
        cin>>n;
        sum=0;

        long long int arr[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }


        sort(arr,arr+n);


        for(i=0,j=1; j<n,i<n; j++,i++)
        {
            if(arr[i]==arr[j])
            {
                sum=1;
                break;

            }

        }

        if(sum==1)
        {
             cout<<"NO"<<endl;
             sum=0;

        }
        else if(sum==0)
        {
              cout<<"YES"<<endl;
              sum=0;

        }


    }



    return 0;
}




