#include<iostream>
using namespace std;

const int maximum = 10;
int queue_arr[maximum];
int front = -1;
int rear = -1;

void enqueue(int data) {
    if (rear == maximum - 1) {
        cout << "Queue overflow" << endl;
        return;
    }
    if (front == -1) { 
        front = 0;
    }
    rear++;
    queue_arr[rear] = data;
    cout << "Enqueued: " << data << endl;
}
void dequeue() {
    if (front == -1 ) {
        cout << "Queue underflow" << endl;
        return;
    }
    cout << "Dequeued: " << queue_arr[front] << endl;
    front++;
}

void printInfo() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Elements in queue: ";
    for (int i = front; i <= rear; i++) {
        cout << queue_arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Welcome to queue implementation!" << endl;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    dequeue();

    printInfo();

    return 0;
}
