// Heap Implementations

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
};


