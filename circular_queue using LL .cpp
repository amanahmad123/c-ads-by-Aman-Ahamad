#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

class Queue
{
    Node* front;
    Node* rear;

public:

    Queue()
    {
        front = rear = NULL;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void enqueue(int info)
    {
        Node* newNode = new Node;

        newNode->data = info;

        if (front == NULL)
        {
            front = rear = newNode;
            rear->next = front;
        }
        else
        {
            newNode->next = front;
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        int item = front->data;

        if (front == rear)
        {
            delete front;
            front = rear = NULL;
        }
        else
        {
            Node* temp = front;

            front = front->next;
            rear->next = front;

            delete temp;
        }

        return item;
    }

    void traverse()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        Node* temp = front;

        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while (temp != front);

        cout << endl;
    }
};

int main()
{
    Queue Q;

    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);

    cout << "Queue: ";
    Q.traverse();

    cout << "Deleted: " << Q.dequeue() << endl;

    cout << "Queue after deletion: ";
    Q.traverse();

    return 0;
}