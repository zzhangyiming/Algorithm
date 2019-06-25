//
// Created by 张一鸣 on 2019/6/24.
//

#ifndef ALGORITHM_ARRAYQUEUE_H
#define ALGORITHM_ARRAYQUEUE_H

#include "Queue.h"
#include "../Array/Array.h"
template <class E>
class ArrayQueue;

template <class E>
class ArrayQueue : public Queue<E>{

private:
Array<E> *array;

public:
    ArrayQueue(int capacity){
        array = new Array<E>(capacity);
    }

    ArrayQueue(){
        array = new Array<E>();
    }

    ~ArrayQueue(){
        delete[] array;
        array = nullptr;
    }




    void enqueue(E e){
        array->addLast(e);
    }

    E dequeue(){
        return array->removeFirst();
    }

    E getFront(){
        return array->getFirst();
    }

    int getSize(){
        return array->getSize();
    }

    bool isEmptpy(){
        return array->isEmpty();
    }

    void print(){
        std::cout<<"Front [ ";
        for(int i = 0;i<array->getSize();i++){
            std::cout<<array->get(i);
            if(i!=array->getSize()-1)
                std::cout<<" , ";
        }
        std::cout<<" ] tail"<<std::endl;
    }

};



#endif //ALGORITHM_ARRAYQUEUE_H
