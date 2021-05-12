// queue in stl;

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;

    // insert
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(100);
    q.push(110);
    q.push(120);
    q.push(130);
    // front and back element
    cout << q.front() << " " << q.back() << endl;

    // deletion
    q.pop();

    cout << q.front() << " " << q.back() << endl;

    while (q.empty() == false)
    {
        cout << q.front() << " " << q.back() << " " << endl;
        q.pop();
    }

    // all operations are O(1);

    // list and deque can be used as queue
    return 0;
}