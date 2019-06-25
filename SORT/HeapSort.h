//
// Created by 张一鸣 on 2019/4/29.
//

#include <algorithm>

#ifndef ALGORITHM_HEAPSORT_H
#define ALGORITHM_HEAPSORT_H
using  namespace std;
#endif //ALGORITHM_HEAPSORT_H


template <typename T>
void shiftDown(int k,int n,T aux[]){
    while(2*k <= n){
        int j = 2 * k;
        if(j+1<n && aux[j+1] > aux[j])
            j++;
        if(aux[k] > aux[j])
            break;
        swap(aux[j],aux[k]);
        k = j;
    }
}

template <typename T>
void MaxHeap(T aux[],int n){
    for(int i = n/2; i >= 1;i--){
        shiftDown(i,n-1,aux);
    }
}

template <typename T>
void HeapSort(T arr[],int n){
    T *aux = new T[n+1];
    for(int i = 0;i < n;i++){
        aux[i+1] = arr[i];
    }
   MaxHeap(aux,n);
    for(int i = n-1;i >= 0; i--){
        arr[i] = aux[1];
        swap(aux[1],aux[n]);
        n--;
        shiftDown(1,n,aux);
    }
    delete aux;
}



