#include <iostream>
using namespace std;
struct Queue
{
    int size, cap;
    int *arr;
    Queue(int c)
    {
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
        arr[size] = data;
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            return;
        }
        for (int i = 0; i < size - 1; i++)
        {

            arr[i] = arr[i - 1];
        }
        size--;
    }
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }else{
            return 0;
        }
    }
    int getRear() {
        if(isEmpty()){
            return -1;
        }else{
            return size-1;
        }
    }
};
int main(){
    Queue q;
    q.Enqueue(5);
    q.Enqueue(12);
    cout<<q.dequeue()<<endl;
    cout <<q.getFront()<<endl;
    cout <<q.getRear()<<endl;
    q.isEmpty();
    cout<<endl;
    q.isFull();
}