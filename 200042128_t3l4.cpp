#include<iostream>
#include<queue>
using namespace std;
class Stack_Queue
{
    queue<int> q;
    public:
    void push_s (int x)
    {
        q.push(x);
    }
    void pop_s()
    {
        queue<int> temp;
        while(q.size()!=1)
        {
            temp.push(q.front());
            q.pop();
        }
        q=temp;
        temp= {};
    }
    int top_s()
    {
        return q.back();
    }
    bool empty_s()
    {
        return q.empty();
    }
 };
 int main()
 {
    Stack_Queue s;
    s.push_s(10);
    cout<<s.top_s()<<endl;
    s.push_s(20);
    cout<<s.top_s()<<endl;
    s.pop_s();
    cout<<s.top_s()<<endl;
    s.push_s(100);
    cout<<s.top_s()<<endl;
    cout<<s.empty_s()<<endl;
    s.pop_s();
    s.pop_s();
    cout<<s.empty_s()<<endl;

}
