//
// Created by 张一鸣 on 2019/6/24.
//

#ifndef ALGORITHM_QUEUE_H
#define ALGORITHM_QUEUE_H
template <class E>
class Queue{
public:
    void enqueue(E e);

    E dequeue();

    E getFront();

    int getSize();

    bool isEmptpy();
};
#endif //ALGORITHM_QUEUE_H
