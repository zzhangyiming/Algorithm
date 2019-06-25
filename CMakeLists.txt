cmake_minimum_required(VERSION 3.6)
project(Algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithm main.cpp SORT/SelectionSort.h SORT/HeapSort.h SORT/MergeSort.h SORT/QuickSortOneWay.h SORT/QuickSortTwoWays.h SORT/QuickSortThreeWays.h Array/Array.h BST/BinarySearch.h Stack/ArrayStack.h Stack/Stack.h Queue/Queue.h Queue/ArrayQueue.h Queue/LoopQueue.h LinkedList/LinkedList.h)