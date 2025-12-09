#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front, rear, capacity, count;
public:
    Queue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    ~Queue() { delete[] arr; }

    void enqueue(int x) {
        if (count == capacity) {
            cout << "Queue overflow\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        count++;
    }

    void dequeue() {
        if (count == 0) {
            cout << "Queue underflow\n";
            return;
        }
        front = (front + 1) % capacity;
        count--;
    }

    int peek() {
        if (count == 0) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() { return count == 0; }
    bool isFull()  { return count == capacity; }
    int size()     { return count; }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.peek() << endl;  // 10
    q.dequeue();
    cout << "Front after dequeue: " << q.peek() << endl;  // 20
    cout << "Size: " << q.size() << endl;   // 2
    return 0;
}
