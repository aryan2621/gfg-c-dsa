// Bucket sort

// consider a situation where we have numbers from range from 1 to 10^8
// How do we sort efficiently ?

// Consider another situation where we have floating point numbers
// uniformly distributed in range from 0.0 to 1.0 ?

// unifrom distribution means if values are 1000
// with range 0.0 t0 1.0
// then if we have 5 slots then values like
// 0.01 ,0.023 .....(200 numbers)*5 times;

// i-> arr[] ={20 80 10 85 75 99 18}
// k=5
// o-> arr[] ={10 18 20 75 80 85 99}
//(we assuming the lowest element to be zero)

// i-> arr[] ={20 80 40 30 70}
// k=4
// o-> arr[] ={20 30 40 70 80}
//(we assuming the lowest element to be zero)

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void bucketSort(int arr[], int n, int k)
{
    int max_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        // max_val = max(max_val, arr[i]);
    }
    max_val++;
    vector<int> bkt[k];
    for (int i = 0; i < n; i++)
    {
        int b1 = (k * arr[i]) / max_val;
        bkt->push_back(arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        sort(bkt[i].begin(), bkt[i].end());
    }
    int index = 0;
    for (int i = 0; i < k; i++)

    {
        for (int j = 0; j < bkt[i].size(); j++)
        {
            arr[index++] = bkt[i][j];
        }
    }
}


// Time Complexity ->Assuming k== n

// Best case -> data is uniformly distributed; O(n);

// Worst case -> All item go in a single bucket 
// if we use insertion sort to individual bucket the O(n^2)
// we use O(nlogn) algo  to sort in individual buckets the O(nlogn)