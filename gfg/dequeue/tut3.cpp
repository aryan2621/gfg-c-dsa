//  Design a data structure that supports following opeartions O(1) time complexity

// insertMin(x)
// insertMax(x)
// getMin()
// getMax()
// extractMin()
// extractMax()

// insertMin(5)
// insertMax(10)
// insertMin(3)
// insertMax(15)
// insertMin(2)
// getMin()
// getMax()
// insertMin(1)
// getMin()
// insertMax(20)
// getMan()

// o-> 2 15 1 20

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct MyDs
{
    deque<int> dq;
    void insertMin(int x)
    {
        dq.push_front(x);
    }
    void insertMax(int x)
    {
        dq.push_back(x);
    }
    void getMin()
    {
        cout << dq.front();
    }
    void getMax()
    {
        cout << dq.back();
    }
    int extractMin()
    {
        dq.pop_front();
    }
    int extractMax()
    {
        dq.pop_back();
    }
};
