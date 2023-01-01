#include<bits/stdc++.h>

using namespace std;
bool isSubset(int a[], int b[], int m, int n)
{

    map<int, int> map1;

    for (int i = 0; i < m; i++)
        map1[a[i]]++;


    int flag = false;

    for (int i = 0; i < n; i++) {

        if (map1.find(b[i]) == map1.end()) {
            flag = true;
            break;
        }

        else {
            map1[b[i]]--;

            if (map1[b[i]] == 0)
                map1.erase(map1.find(b[i]));
            flag = false;
        }
    }

    return flag;
}

int main()
{
    int m,n,i=0,j=0;
    cout<< "Number of arr1"<<endl;
    cin>>m;
    cout<<"Number of arr2"<<endl;
    cin>>n;
    int arr1[m];
    int arr2[n];
    while(m--)
    {
        cin>>arr1[i];
        i++;
        if(arr1[i]== -1)
        {
            break;
        }
    }
    while(n--)
    {
        cin>>arr2[j];
        j++;
        if(arr2[j]== -1)
        {
            break;
        }
    }

    if (!isSubset(arr1, arr2, m, n))
        cout<<"arr2[] is subset of arr1[] ";
    else
        cout<<"arr2[] is not a subset of arr1[]";
}
