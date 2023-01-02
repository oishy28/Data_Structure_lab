#include <iostream>
#include<stack>
#include<queue>

using namespace std;

queue<int>qq;
// Push into the Stack
void push_s(int x) {
  qq.push(x);
}

// Removes the element on top of the stack.
void pop_s() {
    queue<int> temp;
    while(qq.size()>1)
    {
        temp.push(qq.front());
        qq.pop();
    }
    qq=temp;
    temp={};
}

// Get the top element.
int top_s() {
  return qq.back();
}

// Return whether the stack is empty.
bool empty_s() {
  return qq.empty();
}

int main() {

    push_s(10);
    cout << top_s() << endl;
    push_s(20);
    cout << top_s() << endl;
    pop_s();
    cout << top_s() << endl;
    push_s(100);
    cout << top_s() << endl;
    cout << empty_s() << endl;
    pop_s();
    pop_s();
    cout << empty_s() << endl;
}
