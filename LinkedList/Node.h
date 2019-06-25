//
// Created by 张一鸣 on 2019/6/26.
//

#ifndef ALGORITHM_NODE_H
#define ALGORITHM_NODE_H
template<class T>
class Node {
public:
    T e;
    Node *next;

    Node(T e, Node *next) : e(e), next(next) {
    }

    Node(T e) : e(e), next(nullptr) {
    }

    Node() : next(nullptr) {
    }
};
#endif //ALGORITHM_NODE_H
