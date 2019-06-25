//
// Created by 张一鸣 on 2019/6/23.
//

#ifndef ALGORITHM_STACK_H
#define ALGORITHM_STACK_H

template <class E>
class Stack{
public:
    E pop();

    E peek();

    void push(E e);

    int getSize();

    bool isEmpty();



};




#endif //ALGORITHM_STACK_H
