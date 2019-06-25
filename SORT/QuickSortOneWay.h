//
// Created by 张一鸣 on 2019/5/1.
//
#include <algorithm>
#ifndef ALGORITHM_QUICKSORT_H
#define ALGORITHM_QUICKSORT_H

#endif //ALGORITHM_QUICKSORT_H

using namespace std;
namespace QuikSortOneWay {
    template<typename T>
    int partition(T arr[], int l, int r) {
        T v = arr[l];// 第一个元素作为 v
        int j = l;
        for (int i = l + 1; i <= r; i++) {
            if (arr[i] < v) {
                j++;
                swap(arr[i], arr[j]);

            }
        }
        swap(arr[j], arr[l]);
        return j;
    }

    template<typename T>
    void sort(T arr[], int l, int r) {
        if (l >= r)
            return;
        int p = partition(arr, l, r);
        sort(arr, l, p - 1);
        sort(arr, p + 1, r);
    }

    template<typename T>
    void QuickSortOneWay(T arr[], int n) {
        sort(arr, 0, n - 1);
    }
}
