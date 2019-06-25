//
// Created by 张一鸣 on 2019/5/1.
//
#include <algorithm>
#include<time.h>

#ifndef ALGORITHM_QUICKSORTTWOWAYS_H
#define ALGORITHM_QUICKSORTTWOWAYS_H

#endif //ALGORITHM_QUICKSORTTWOWAYS_H
using namespace std;
template <typename T>
int partition(T arr[],int l,int r){
    swap(arr[l] , arr[rand()%(r-l+1)+l]);// 随机一个元素作为v
    T v = arr[l];
    int i = l+1,j =r;
    while(true){
        while(i <=r && arr[i] < v){
            i++;
        }
        while(j >= l+1 && arr[j] > v){
            j--;
        }
        if(i>j)
            break;
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    swap(arr[l],arr[j]);
    return j;
}

template <typename T>
void sort(T arr[],int l,int r){
    if(l>=r)
        return;
    int p = partition(arr,l,r);
    sort(arr,l,p-1);
    sort(arr,p+1,r);
}

template <typename T>
void QuickSortTwoWays(T arr[],int n){
    sort(arr,0,n-1);
}