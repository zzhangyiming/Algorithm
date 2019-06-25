//
// Created by 张一鸣 on 2019/6/24.
//

#ifndef ALGORITHM_LOOPQUEUE_H
#define ALGORITHM_LOOPQUEUE_H

#include "Queue.h"
#include "iostream"
#include <cassert>
template <class E>
class LoopQueue;


template <class E>
class LoopQueue : public Queue<E>{
private:
    E *data;
    int front,tail;
    int capacity;

    void resize(int newCapacity){
        E *newData = new E[newCapacity];
        for(int i =0; i<=getSize();i++){
            newData[i] = data[(front+i) % capacity];
        }
        data = newData;
        front = 0;
        tail = getSize();
        capacity = newCapacity;
    }
public:
    LoopQueue(int capacity){
        data = new E[capacity];
        front = 0;
        tail = 0;
        capacity = 10;
    }

    LoopQueue(){
        data = new E[10];
        front = 0;
        tail = 0;
        capacity = 10;
    }





    void enqueue(E e){
        if((tail+1) % capacity == front){
            resize(getCapacity() *2 );
        }
        data[tail] = e;
        tail = (tail+1) % capacity;

    }

    E dequeue(){
        assert(front != tail);
        E ret = data[front];
        front = (front+1) % capacity;
        if(getSize() == getCapacity() /4 ){
            resize(getCapacity()/2);
        }
        return ret;
    }

    int getCapacity(){
        return capacity;
    }

    E getFront(){
        assert(front != tail);
        return data[front];
    }

    int getSize(){
        return (tail + capacity - front) % capacity;
    }

    bool isEmptpy(){
        return front==tail;
    }

    void print(){
        std::cout<<"Front [ ";
        for(int i = front;i !=tail; i = (i + 1) % capacity){
            std::cout<<data[i];
            if((i + 1) % capacity != tail)
                std::cout<<" , ";
        }
        std::cout<<" ] tail ,"<<"size: "<<getSize()<<"  capacity:  "<< getCapacity()<<std::endl;
    }
};


#endif //ALGORITHM_LOOPQUEUE_H
