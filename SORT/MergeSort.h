//
// Created by 张一鸣 on 2019/4/30.
//

#ifndef ALGORITHM_MERGESORT_H
#define ALGORITHM_MERGESORT_H

#endif //ALGORITHM_MERGESORT_H
template <typename T>
void merge(T arr[],int l,int mid,int r){
    T aux[r-l+1];
    for( int i = l ; i <= r; i ++ ) {
        aux[i - l] = arr[i];
    }
    int i = l,j = mid+1;
    for(int k = l;k <= r; k++){
        if(i > mid) {
            arr[k] = aux[j - l];
            j++;
        }
        else if(j > r){
            arr[k] = aux[i-l];
            i++;
        }
        else if(aux[i-l] <aux[j-l]) {
            arr[k] = aux[i-l];
            i++;
        }
        else{
            arr[k] = aux[j-l];
            j++;
        }
    }

}

template <typename T>
void MergeSort(T arr[],int l,int r){
    if(l>=r) {
        return;
    }
    int mid = (l+r)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

template <typename T>
void MergeSort(T arr[] ,int n){
    MergeSort(arr,0,n-1);
}