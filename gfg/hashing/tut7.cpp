// Implementation of Chaining;

// simple linked list implementattion;

#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
    int BUCKET;

    list<int> *table; // linkedlist<integer> [] table;(Java)
    MyHash(int b);
    {
        BUCKET = b;
        table = new list<int>[BUCKET];
        // array of linkedlist
    }
    void insert(int key);
    {
        int i = hash(key);
        table[i].push_back(key);
    }
    void remove(int key);
    {
        int i = hash(key);
        table[i].remove(key);
    }
    bool search(int key);
    {
        int i = hash(key);
        for (auto x : table[i])
        {
            if (x == key)
                return true;
            return false;
        }
    }
    int hash(int key);
    {
        return key % BUCKET;
    }
};
