// Hoare's Partition method

// O(1) extra space and O(n) time

// in this we consider the first element as Pivot

//     {5 3 8 4 2 7 1 10}
// l=0  pivot =arr[i] =5  h=7

//   _________________________________
//   |           |          |        |
//   |  <pivot   | unknow ? | > pivot|
//   |___________|__________|________|
//  l           i->        <-j      h

// {5 3 8 4 2 7 1 10}

// i l=0            h=7
// pivot =arr[i]=5;
// i=-1 j=8

// {5 3 8 4 2 7 1 10}
// i=0 j=6

// {1 3 8 4 2 7 5 10}
// i=2 j=4

// {1 3 2 4 8 7 5 10}
// i =4 j=3;

// we return as i>=j now
//see yourself the pivot is not in its correct position.

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;

        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}

//Corner cases
// Pivot is smallest
// {5 10 9 12}
// i=0       h=3

// i=-1 j=4
// i=0 j=0

// Pivot is largest
// {12 10 5 9}
// l=0 h=3 i=-1 j=4
// {12 10 5 9}
// i=0 j=3
// {9 10 5 12}
// i=3 j=2

// All element are same
// {5 5 5 5}
// l=0 h=3 i=-1 j=4

// {5 5 5 5}
// i=0     j=3

// {5 5 5 5}
// i=1    j=2

// unstable partition
//lemuto partion is also not stable.
// Naive soln in first space is stable.