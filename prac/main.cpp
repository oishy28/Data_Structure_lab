/*#include<iostream>

using namespace std;
class IntArr
{
private:
    int cap;
    int nrOfel;
    int *arr;
    void intitialize(int from)
    {
        for(size_t i=from;i<cap;i++)
        {
            arr[i] =0;
        }
    }
    void expand()
    {
        cap *= 2;
        int *temparr = new int[cap];
        for(size_t i =0;i<nrOfel;i++)
        {
            temparr[i]=arr[i];
        }

        delete[] arr;

    arr=temparr;
    }

public:
    IntArr()
    {
       cap=10;
       nrOfel=0;
        arr = new int[cap];
    }
    ~IntArr()
    {
        delete[] arr;
    }
    void add(int el)
    {
        if(nrOfel>cap)
        {
            expand();
        }
        arr[nrOfel++]=el;
    }
    int getAt(int index)const
    {
        if(index<0 || index>=nrOfel)
        {
            throw("Out of bounds exception");

        }
        return arr[index];

    }
    void popback()
    {
        if(nrOfel>0)
        {
            arr[--nrOfel] = 0;
        }
        else
            cout<<"Array empty"<<endl;
    }
    int getNrofl()const
    {return nrOfel;}
};
int main()
{
    IntArr arr;
    arr.add(10);
    arr.add(11);
    arr.add(12);
    arr.add(13);
    for(size_t i=0;i<arr.getNrofl();i++)
    {
        cout<<i<<":"<<arr.getAt(i)<<endl;
    }
    system("PAUSE");

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,m,n;
    int* arr = new int[1000];

    cin>>t>>endl;
    while(t--)
    {
        cin>>n>>endl;
        for(i=0;i<n;i++)
        {
            cin>>m;
            arr[i]=m;
        }
    }
}
