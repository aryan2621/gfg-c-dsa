// unorderded set in c++ stll;

// insert()
// began()
// end()
// size()
// clear()
// find()

// set based on red black tree;
// unordrederd set based on the hashing

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int> s;

    //insert

    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    // for (auto value : s)
    // {
    //     cout << value << " ";
    // }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    //size
    cout << s.size() << " ";

    // s.clear();

    // cout << s.size() << " ";
    cout << endl;

    //find
    if (s.find(15) == s.end())
    // find returns the iterator
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found " << *(s.find(15));
    }

    cout << endl;

    //counts
    if (s.count(15))

    // count returns 1 0r 0
    {
        cout << "Counts"
             << " ";
    }
    else
    {
        cout << "Not Counts"
             << " ";
    }
    //unordered ignore the duplicates value;
    // unordered way!

    //erase

    // method-1
    s.erase(5);

    //method-2
    auto it = s.erase(10);
    s.erase(it);

    // erase on the range
    s.erase(s.begin(), s.end());
    cout << s.size(); // 0

    return 0;
}

// Internal working and Time Complexity ->

// begin(),end(),cbegin(),cend() -> O(1)

// insert(),erase(val),erase(it),find(),count() -> O(1) on an average
// due to hashing mchanism internally

// size(),delete() ->  O(1)

// applications 

// unordered sets can be use anywhere;
// we need follwoing operations search insert and delete