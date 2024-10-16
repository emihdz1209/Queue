#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(int capacity){
    front = -1;
    rear = -1;
    size = capacity;
    queue = new int[capacity];
}

bool Queue::isEmpty(){
    return front == -1;
}

bool Queue::isFull(){
    return rear == size - 1;
}   

void Queue::enqueue(int value){
    if(isFull()){
        cout << endl << "Queue is full" << endl;
        return;
    }

    if (front == -1){
        front = 0;
    }
    queue[++rear] = value;
    cout << endl << value << " enqueue to queue" << endl;
}

void Queue::dequeue(){
    if(isEmpty()){
        cout << endl << "Queue is empty" << endl;
        return;
    }

    cout << endl << queue[front] << " dequeue from queue" << endl;
    front++;

    if(front > rear){
        front = -1;
        rear = -1;
    }
}

int Queue::frontElement(){
    if(isEmpty()){
        cout << endl << "Queue is empty" << endl;
        return -1;
    }
    return queue[front];
}

Queue::~Queue(){
    delete[] queue;
}