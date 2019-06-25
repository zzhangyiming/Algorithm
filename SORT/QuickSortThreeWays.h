//
// Created by 张一鸣 on 2019/5/2.
//
#include <algorithm>
#include<time.h>
#ifndef ALGORITHM_QUICKSORTTHREEWAYS_H
#define ALGORITHM_QUICKSORTTHREEWAYS_H

#endif //ALGORITHM_QUICKSORTTHREEWAYS_H
using namespace std;
template <typename T>
void sort(T arr[],int l,int r){
    if(l >= r)
        return;
    swap(arr[l],arr[rand()%(r-l+1)+l]);
    T v = arr[l];
    int lt = l,gt = r+1,i =l+1;
    while(i < gt){
        if(arr[i] < v){
            lt++;
            swap(arr[i],arr[lt]);
            i++;
        } else if(arr[i] > v){
           gt--;
           swap(arr[i],arr[gt]);

        }else{
           i++;
        }
    }
    swap(arr[l],arr[lt]);
    sort(arr,l,lt-1);
    sort(arr,gt,r);
}

template <typename T>
void QuickSortThreeWays(T arr[],int n ){
    sort(arr,0,n-1);
}