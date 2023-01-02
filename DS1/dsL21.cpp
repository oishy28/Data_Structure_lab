
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
    //extra code
     void expand()
    {
        Capacity *= 2;
        int *temparr = new int[Capacity];
        for(size_t i =0;i<Size;i++)
        {
            temparr[i]=arr[i];
        }

        delete[] arr;

    arr=temparr;
    }
    void Reverse()
    {
        // implement this method
        int *temarr = new int[Capacity];

        for(size_t i=0;i<Size;i++ )
        {
            temarr[i]=arr[Size-1];
            Size--;

        }
        delete[] arr;
        arr=temarr;
    }
    void PushBack(int val)
    {
        // implement this method
         if(Size>Capacity)
        {
            expand();
        }
        arr[Size++]=val;
    }
    int Get_Size()
    {
        return Size;
    }
    int Get_Capacity()
    {
        return Capacity;
    }



};

int main()
{
    Dynamic_Array arr;
    for(int i =0;i<16;i++)
    {
        arr.PushBack(100 + i);
    }

    for(int i = 0; i < arr.Get_Size();i++)
    {
        cout << arr.Get(i)<<endl;
    }
    arr.Reverse();
    cout<<"After reversing the order of the elements"<<endl;
    for(int i=0;i<arr.Get_Size();i++)
    {

        cout<< arr.Get(i)<<endl;
    }

}
