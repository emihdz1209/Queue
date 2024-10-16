#ifndef QUEUE_H
#define QUEUE_H

class Queue{
    private:
        int front;
        int rear;
        int size;
        int *queue; //puntero a un arreglo de enteros que representará la cola de enteros 
    public:
        Queue(int capacity); //constructor
        bool isEmpty();
        bool isFull();
        void enqueue(int value);
        void dequeue();
        int frontElement();
        ~Queue(); //destructor
};

#endif //QUEUE_H
