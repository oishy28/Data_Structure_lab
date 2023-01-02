#include<bits/stdc++.h>
#include<stack>
using namespace std;

class stack{
    //properties
public:
    int *arr;
    int top;
    int size;
    //behaviour
    Stack(int size)
    {
        this->size =size;
        arr = new int[size];
        top =-1;

    }
    void push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;

        }
        else
        {
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop()
    {
        if(top>=0)
        {
            top--:
        }
        else{
            cout<<"Stack underflow"<,endl;
        }
    }
    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }

    }
    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else{
            return false;
        }


    }
};
int main()
{
   /* stack<int> s;

    s.push(2);
    s.push(3);

    s.pop();
    cout<<s.top();
    if(s.empty())
    {
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"not";
    }

    cout<<s.size();

    return 0;*/
}
