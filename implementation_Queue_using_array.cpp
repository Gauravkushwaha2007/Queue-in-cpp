#include <iostream>
using namespace std;

int arr[100];
int size = 100;
int front = -1;
int rear = -1;

// push in Queue(inqueue)
void push(int data) {
    if(rear >= size - 1) {
        cout << "Queue is full!\n";
        return;
    }

    if(front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }

    arr[rear] = data;
}

// Delete in queue (dequeue)
void pop() {

    if(front == -1 || front > rear) {
        cout << "Queue is already Empty!\n";
        return;
    }

    cout << "Deleted: " << arr[front] << endl;
    front++;
}

// Display Queue
void display() {
    if(front == -1) {
        cout << "No values exist in Queue\n";
        return;
    }

    for(int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    push(10);
    push(20);
    push(30);
    push(40);
    cout << "Queue elements only pushing : ";
    display();
    pop();
    pop();
    cout << "Our Queue after deletion: ";
    display();

    return 0;
}
