//
// Created by 张一鸣 on 2019/6/25.
//

#ifndef ALGORITHM_LINKEDLISTSTACK_H
#define ALGORITHM_LINKEDLISTSTACK_H

#include "Stack.h"
#include "../LinkedList/LinkedList.h"

template <class E>
class LinkedListStack;

template <class E>
class LinkedListStack : public Stack<E>{
private:
    LinkedList<E> *list;



public:

    LinkedListStack(){
        list = new LinkedList<E>;
    }


    E pop(){
        return list->removeFirst();
    }

    E peek(){
        return list->getFirst();
    }

    void push(E e){
        list->addFirst(e);
    }

    int getSize(){
        return list->getSize();
    }

    bool isEmpty(){
        return list->isEmpty();
    }

    void print(){
        if(isEmpty()){
            std::cout<<"stack is empty"<<std::endl;
        }else{
            std::cout<<"stack : top ";
            for(int i = 0;i < getSize();i++){
                std::cout<<list->get(i)<<" ";
            }
        }

    }







};
#endif //ALGORITHM_LINKEDLISTSTACK_H
