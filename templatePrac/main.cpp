/*#include<iostream>
using namespace std;

template <class T>
T getMax(T a,T b){
    T result;
    result=(a>b)?a:b;
    return result;
}

int main()
{
    int i=5,j=6,k;
    long l=10,m=5,n;
    k=getMax<int>(i,j);
    n=getMax<long>(l,m);
    cout<<k<<" "<<n<<endl;
    return 0;
}
*/

#include<iostream>

using namespace std;

void heapify(int arr[],int N,int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(i<N && arr[i]>arr[largest])
    {
        largest = l;
    }
    if(r<N && arr[r]>arr[largest])
    {
        largest = r;
    }

    if(largest !=i)
    {
        swap(arr[i],arr[largest]);

        heapify(arr,N,largest);
    }
}
