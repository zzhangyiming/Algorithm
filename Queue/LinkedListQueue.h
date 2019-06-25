//
// Created by 张一鸣 on 2019/6/25.
//

#ifndef ALGORITHM_LINKEDLISTQUEUE_H
#define ALGORITHM_LINKEDLISTQUEUE_H

#include "Queue.h"
#include <iostream>
#include "../LinkedList/LinkedList.h"

template <class E>
class LinkedListQueue;

template <class E>
class LinkedListQueue : public Queue<E>{
private:
    Node<E> *head,*tail;
    int size;

public:

    LinkedListQueue(){
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void enqueue(E e){
        if(tail == nullptr){
            tail = new Node<E>(e);
            head = tail;
        }else{
            tail->next = new Node<E>(e);
            tail = tail->next;
        }
        size ++;
    }

    E dequeue(){
        if(isEmptpy()) {
            std::cout << "Queue is empty." << std::endl;
            return nullptr;
        }else{
            Node<E> *retNode = head;
            head = head->next;
            retNode->next = nullptr;
            if(head == nullptr)
                tail = nullptr;
            size--;
            return retNode->e;

        }

    }

    E getFront(){
        if(isEmptpy()) {
            std::cout << "Queue is empty." << std::endl;
            return nullptr;
        }
        return head->e;
    }

    int getSize(){
        return size;
    }

    bool isEmptpy(){
        return size==0;
    }

    void print(){
        std::cout<<"Queue: front ";
        Node<E> *cur = head;
        while(cur != nullptr){
            std::cout<<" -> "<<cur->e;
            cur = cur->next;
        }
        std::cout<<" NULL tail"<<std::endl;
    }

};




#endif //ALGORITHM_LINKEDLISTQUEUE_H
