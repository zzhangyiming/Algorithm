//
// Created by 张一鸣 on 2019/4/29.
//

#include <regex>
using namespace std;
#ifndef ALGORITHM_SORT_H
#define ALGORITHM_SORT_H

#endif //ALGORITHM_SORT_H
template <typename T>
void selectionSort(T arr[] ,int n){
    for(int i = 0; i < n; i++){
        int minindex = i;
        for(int j = i+1; j < n; j++)
            if(arr[j] < arr[minindex])
                minindex = j;
        swap(arr[i],arr[minindex]);
    }
}

