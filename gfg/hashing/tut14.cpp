// Count distinct Elements
// i-> {15,12,13,12,13,13,18}
// o-> 4

// i->{10,10,10}
// 1

// i-> {10,20,30}
// o-> 3

// naive solution

#include <bits/stdc++.h>

using namespace std;

int CountDst(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i - 1; j >= 0; j++)
        {
            if (arr[j] == arr[i])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            res++;
    }
    return res;
}

// efficient method

int CountDist(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}