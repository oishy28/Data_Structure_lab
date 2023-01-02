
#include<bits/stdc++.h>
using namespace std;

class Dynamic_Array
{
public:
    int Size;
    int Capacity;
    int *arr;
    Dynamic_Array()
    {
        Size = 0;
        Capacity = 1;
        arr = new int[Capacity];
    }
    int Get(int i)
    {

        if ((i < 0 ) or (i >= Size))
        {
            cout << "Index out of Range" << endl;
            return -1;
        }
        return arr[i];

    }
    void Set(int i,int val)
    {
        if ((i < 0 ) or (i >= Size))
        {
            cout << " Index out of Range" << endl;
            return;
        }
        arr[i] = val;

    }
};

int main()
{
    Dynamic_Array arr;
    int value;
    int *num_arr = new int[100];

    printf("Enter nums: ");

    for(size_t i=0;i<sizeof(num_arr);i++)
    {
        scanf("%d",&num_arr[i]);
        if(num_arr[i]==0)
        {
            break;
        }
    }

    printf("Enter the value: ");
    scanf("%d",&value);

}
