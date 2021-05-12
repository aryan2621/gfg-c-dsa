// Dequeue in c++ stl;

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dq = {10, 15, 30, 5, 12};

    // pushes the data from front;
    dq.push_front(5);

    // pushes the data from the rear;
    dq.push_back(10);

    for (auto x : dq)
    {
        cout << x << " ";
    }
    cout << endl;

    // front and back;
    cout << dq.front() << " " << dq.back() << endl;

    auto it = dq.begin();
    it++;

    // insert at particular position
    dq.insert(it, 20); // {10,20,15,30,5,12}

    // pop functions
    dq.pop_front();
    dq.pop_back();
    cout << dq.size();

    // suppose dequeue initialised as {10,20,5,30}
    auto it = dq.begin(); // begin rep position before start and end represent after the end

    it = dq.insert(it, 7); //{7,10,20,5,30}
    // it returns the itrerartor pointing to the last element inserted through insert

    it = dq.insert(it, 17);
    it = dq.insert(it, 2, 3); // it insert the 3 twice and pointing to last insert lemenet

    // erase
    it = dq.erase(it + 1); //{3,3,10,20,5,30}

    cout << (*it) << endl;

    for (int i = 0; i < dq.size(); i++)
    {
        cout <<dq[i];
    }

    return 0;
}