#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int size;
    int rear = -1;
    int front = -1;

public:
    Queue(int k)
    {
        arr = new int[k];
        size = k;
    }
    void enQueue(int data)
    {
        if (rear == size - 1)
        {
            cout << "Queue Is Full" << endl;
        }
        else
        {
            if (front == -1 && rear == -1)
            {
                front = 0;
                rear = 0;
                arr[rear] = data;
            }
            else
            {
                arr[++rear] = data;
            }
        }
    }
    void deQueue()
    {
        if (front == -1 || front == size)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            int temp = arr[front];
            front++;
            cout << "Popped Element: " << temp << endl;
        }
    }
};

int main()
{
    Queue q1(5);
    q1.deQueue();
    q1.enQueue(1);
    q1.enQueue(2);
    q1.enQueue(3);
    q1.enQueue(4);
    q1.enQueue(5);
    q1.enQueue(6);

    q1.deQueue();
    q1.deQueue();
    q1.deQueue();
    q1.deQueue();
    q1.deQueue();
    q1.deQueue();
    q1.deQueue();

    return 0;
}