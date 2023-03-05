#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top = -1;

public:
    Stack(int n)
    {
        arr = new int[n];
        size = n;
    }
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            int temp = arr[top];
            top--;
            cout << "Popped Element " << temp << endl;
        }
    }
    void isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack Is Empty" << endl;
        }
        else
        {
            cout << "Stack Is Not Empty" << endl;
        }
    }
    void isFull()
    {
        if (top == size - 1)
        {
            cout << "Stack Is Full" << endl;
        }
        else
        {
            cout << "Stack Is Not Full" << endl;
        }
    }
};

int main()
{
    Stack s1(5);
    s1.push(2);
    s1.isEmpty();
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.isEmpty();
    return 0;
}
