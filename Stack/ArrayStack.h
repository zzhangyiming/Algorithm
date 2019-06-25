//
// Created by 张一鸣 on 2019/6/23.
//

#ifndef ALGORITHM_ARRAYSTACK_H
#define ALGORITHM_ARRAYSTACK_H
#include "../Array/Array.h"
#include "Stack.h"

template <class E>
class ArrayStack;

template <class E>
class ArrayStack: public Stack<E>{
private:
    Array<E> *array;

public :
    ArrayStack(int capacity){
        array = new Array<E>(capacity);
    }

    ArrayStack(){
        array = new Array<E>();
    }

    ~ArrayStack(){
        delete[] array;
        array = nullptr;
    }

    void push(E e){
        array->addLast(e);
    }

    E pop(){
        return array->removeLast();
    }

    E peek(){
        return array->getLast();
    }

    bool isEmpty(){
        return array->isEmpty();
    }

    int getSize(){
        return array->getSize();
    }

    void print() {
        std::cout << "Stack: size = " << array->getSize() << ", capacity = " << array->getCapacity() << std::endl;
        std::cout << "bottom ";
        array->toPrint();
        std::cout << " top" << std::endl;
    }
};
#endif //ALGORITHM_ARRAYSTACK_H


