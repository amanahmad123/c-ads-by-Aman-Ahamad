#include <iostream>
using namespace std;

class Node {
public:
    int info;
    Node* next;

    Node(int data) {
        info = data;
        next = NULL;
    }
};

Node* front = NULL;
Node* rear = NULL;

bool isEmpty() {
    return front == NULL;
}

void traverse() {

    if (front == NULL) {
        cout << "Empty Queue" << endl;
        return;
    }
 Node* temp = front;

    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->next;
    }
cout << endl;
    cout << "Front = " << front->info
 << ", Rear = " << rear->info << endl;
}

void enqueue(int info) {

    Node* newNode = new Node(info);
if (front == NULL) {
        front = newNode;
       rear = newNode;
    }
    else {
        rear->next = newNode;
   rear = newNode;
    }
}

int main() {

    enqueue(10);
enqueue(20);
 enqueue(30);
enqueue(40);

    traverse();

    return 0;
}





