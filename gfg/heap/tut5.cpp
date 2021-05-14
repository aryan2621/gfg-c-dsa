// Binary Heap (Decrease Key ,Delete and Build Heap);

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class MinHeap
{
    int capacity;
    int size;
    int *arr;
    MinHeap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    void minHeapify(int i)
    {
        int lt = left(i), rt = right(i);
        int smallest = i;
        if (lt < size && arr[lt] < arr[i])
        {
            smallest = lt;
        }
        if (rt < size && arr[rt] < arr[smallest])
        {
            smallest = rt;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }
    void decreaseKey(int i, int x)
    // Time Complexityy ->O(logn)
    {
        arr[i] = x;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void buildHeap()
    {
        for (int i = (size - 2) / 2; i >= 0; i--)
        {
            minHeapify(i);
        }
        // Time Complexity ->O(n) [n->size]
    }
};

// max number of nodes at the height h-> [n/2^h+1]

//             log n
// Total Time ->sum [n/2^h+1]O(h)
//              h=1

//                     logn
//             ->O(n * sumh/2^h+1)
//                      h=1

// s = 1/2^2 + 2/2^3 + 3/3^4 ......
// s/2 = 1/2^3 + 2/2^4 ............

// s-s/2=1/2
// s=1


