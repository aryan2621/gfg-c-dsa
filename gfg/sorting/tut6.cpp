// Merge sort -> Divide and Conquerer (Divide ,Conquerer and Merge)
// Stable algorithms.
// theta (n logn) Time and O(n) Auxiliary space;
// well suited for linked list works in O(1) auxiliary space;
// used in external sorting;
// in general for arrays quick sort outperforms it;

// Merge two sorted array

// i-> a[]={10 ,15 ,20, 40}
//     b[]={5 ,6 , 6, 10, 15}
// o-> 5 6 6 10 10 15 15 20 40

// i-> a[] ={1 , 1, 2}
//     b[]={3}
//   o-> 1 1 2 3

// Naive soln

// copy all the elements of both array in third element c and the sort it
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void mergeSort(int a[], int b[], int m, int n)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    };
    for (int j = 0; j < m; j++)
    {
        c[j + m] = b[j];
    };
    sort(c, c + m + n);
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
}

// Time Complexity -> O((m+n)* log(m+n))

void MergeSort(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            cout << a[i++] << " ";
        }
        else
        {
            cout << b[j++] << " ";
        }
    }
    while (i < m)
    {
        cout << a[i++] << " ";
    }
    while (j < n)
    {
        cout << b[j++] << " ";
    }
}

// Time Complexity -> O(m+n)