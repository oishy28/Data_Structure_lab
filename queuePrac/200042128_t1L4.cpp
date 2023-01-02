#include <iostream>
#include<queue>

using namespace std;

class CircularQueue
{
    int* arr;
    int qfront;
    int rear;
    int size;

public:
    CircularQueue()
    {
        size=10000;
        arr = new int[size];
        qfront = -1;
        rear = -1;

    }
    void enqueue(int data)
    {
        if((qfront==0 && rear==size-1)||(rear==(qfront-1)%(size-1)))
        {
            cout<<"full"<<endl;
        }
        else if(qfront==-1)
        {
            qfront=rear=0;
            arr[rear]= data;

        }
        else if(rear==size-1 &&qfront!=0)
        {
            rear =0;
            arr[rear]=data;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    int dequeue()
    {
       /* if(front==rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
             arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear =0;
            }*/

            if(qfront==-1)//to check empty
            {
                cout<<"Empty"<<endl;
                return -1;
            }
            int ans=arr[qfront];
            arr[qfront]=-1;
            if(qfront==rear)//single element
            {
                qfront=rear=-1;
            }
            else if(qfront==size-1)
            {
                qfront=0;//to maintain cyclic nature
            }
            else{
                qfront++;
            }
            return ans;

        }

        bool isEmpty()
        {
            if(qfront==-1)
            {
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull()
        {
            if (qfront == 0 && rear == size - 1) { return true; }
            else if(qfront == rear + 1) { return true; }
            else{return false;}
        }
        void display() {
    // Function to display status of Circular Queue
    int i;
    if (isEmpty())
    { cout << endl << "Empty Queue" << endl; }
    else { cout << "Front -> " << qfront; cout << endl << "Items -> ";
     for (i = qfront; i != rear; i = (i + 1) % size)
    cout << arr[i]<<endl;
     cout << arr[i]<<endl;
      cout << endl << "Rear -> " << rear;
       } }
};

int main()
{
    //front-first in
    //rear-last in
    CircularQueue q;
    q.enqueue(1);
      q.enqueue(13);
       q.enqueue(1);
        q.enqueue(1);

        q.dequeue();
        q.display();
}
