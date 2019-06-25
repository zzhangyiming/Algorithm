//
// Created by 张一鸣 on 2019/5/20.
//

#ifndef ALGORITHM_ARRAY_H
#define ALGORITHM_ARRAY_H
#endif //ALGORITHM_ARRAY_H

#include <iostream>
#include <cassert>
template<class E>
class Array {
private :
    E *data;
    int size;
    int capacity;

    void resize(int newCapacity){
        E *newData = new E[newCapacity];
        for(int i =0; i<=size;i++){
            newData[i] = data[i];
        }
        data = newData;
        capacity = newCapacity;
    }

public:
    Array(int capacity){
        data = new E[capacity];
        size = 0;
        this->capacity = capacity;
    }

    Array(){
        data = new E[10];
        size = 0;
        capacity = 10;
    }

    int getCapacity(){
        return capacity;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void add(int index,E e){
        if(index < 0 || index > size){
           std::cout<<"add failed, the index out of the range. "<<"index:"<<index<<std::endl;
           return;
        }
        if(size == capacity){
            resize(capacity*2);
        }
        for(int i = size-1; i>= index; --i){
            data[i+1] = data[i];
        }
        data[index] = e;
        size++;
    }

    E remove(int index){
        if(index < 0 || index >= size){
            throw "remove failed,the index out of the range. ";
        }
        E ret = data[index];
        for(int i = index+1; i< size; i++){
            data[i-1] = data[i];
        }
        size--;
        if (size == capacity / 4 && capacity / 2 != 0){
            resize(capacity / 2);
        }
        return ret;
    }

    void removeElement(E e){
        int index = find(e);
        if(-1 != index){
            remove(index);
        }
    }

    E removeLast(){
       return remove(size-1);
    }

    E removeFirst(){
        return  remove(0);
    }

    void addFirst(E e){
       add(0,e);
    }

    void addLast(E e){
        add(size,e);
    }

    E get(int index){
        assert(index >= 0 && index < size);
        return data[index];
    }

    E getFirst(){
        return get(0);
    }

    E getLast(){
        return get(size-1);
    }
    void set(int index, E e){
        assert(index >= 0 && index < size);
        data[index] = e;
    }

    int find(E e){
        for(int i = 0;i<size;i++){
            if(data[i]==e)
                return i;
        }
        return -1;
    }
    void toPrint() {
        std::cout << "[";
        for (int i = 0; i < size; ++i) {
            std::cout << data[i];
            if (i != size - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]";
    }

};