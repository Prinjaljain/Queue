#include <iostream>
using namespace std;
struct Queue
{
    int front, size, cap;
    int *arr;
    Queue(int c)
    {
        front = 0;
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull()
    {
        return (size == cap);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    void Enqueue(int data)
    {
        if (isFull())
        {
            return;
        }
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = data;
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            return;
        }
        front = (front + 1) % cap;
        size--;
    }
    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return front;
        }
    }
    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return (front + size - 1) % cap;
        }
    }
};
int main()
{
    Queue *q;
    Enqueue(q,5);
    Enqueue(q,12);
    cout <<dequeue(q) << endl;
    cout <<getFront(q) << endl;
    cout <<getRear(q) << endl;
    q.isEmpty();
    cout << endl;
    q.isFull();

    // Queue *queue = createQueue(1000);

    // enqueue(queue, 10);
    // enqueue(queue, 20);
    // enqueue(queue, 30);
    // enqueue(queue, 40);

    // cout << dequeue(queue)
    //      << " dequeued from queue\n";

    // cout << "Front item is "
    //      << front(queue) << endl;
    // cout << "Rear item is "
    //      << rear(queue) << endl;

    // return 0;
}