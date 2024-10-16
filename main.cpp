//Queue es una estructura de datos que permite almacenar y recuperar datos de forma ordenada.
//La característica principal de una cola es que el primer elemento en entrar es el primero en salir.
//Esto se conoce como FIFO (First In First Out).
//En una cola, los elementos se agregan al final y se eliminan del principio.
//En este programa se implementa una cola de enteros.

#include <iostream>
#include "Queue.h"

using namespace std;

main(){

    Queue q(5); //se crea una cola de tamaño 5

    q.enqueue(10); //se agrega el valor 10 a la cola
    q.enqueue(20); //se agrega el valor 20 a la cola
    q.enqueue(30); //se agrega el valor 30 a la cola

    q.dequeue(); //se elimina el primer elemento de la cola
    q.dequeue(); //se elimina el primer elemento de la cola

    cout << endl << "Front element is: " << q.frontElement() << endl; //se imprime el primer elemento de la cola
}