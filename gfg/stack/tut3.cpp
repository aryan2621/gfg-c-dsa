// Stack in c++ stl;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;

    // insertion
    s.push(10);
    s.push(20);
    s.push(100);

    // size
    cout << s.size() << " " << endl;

    // give the toppest element
    cout << s.top() << " " << endl;

    // deletion
    s.pop();
    cout << s.top() << " " << endl;

    // transversing the stack;
    while (s.empty() == false)
    {
        cout << s.top() << " " << endl;
        s.pop();
    }
    return 0;
}

// Time Complexity -> push pop top size empty ->O(1)
// stack can be implemented on any underlaying container that provides following opeartions:
// back size empty push_back pop_back

// stack can be implemented using the others containers 
// hence stack is called container adapters 