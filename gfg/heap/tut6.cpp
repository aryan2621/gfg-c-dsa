// Priority queue in c++;

// Priority queue always as the max heap;

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> pq;

    // pushing the values
    pq.push(10);
    pq.push(15);
    pq.push(20);

    // size
    cout << pq.size() << " ";

    // top values
    cout << pq.top() << " ";

    // checking the empty
    while (pq.empty() == false)
    {

        cout << pq.top() << " ";

        // pop the values
        pq.pop();
    }

    // how to create the prority queue with minimum at the top?
    priority_queue<int, vector<int>, greater<int>> pql;
    pql.push(10);
    pql.push(15);
    pql.push(20);

    // size
    cout << pql.size() << " ";

    // top values
    cout << pql.top() << " ";

    // checking the empty
    while (pql.empty() == false)
    {

        cout << pql.top() << " ";

        // pop the values
        pql.pop();
    }
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    priority_queue<int> pa(arr, arr + 8);
    while (pa.empty() == false)
    {
        cout << pa.top() << " ";
        pa.pop();
    }
    // for using the same max heap and dont want to remember the
    //same long formula u can make all the elements -ve in the
    //vector/array

    struct Person
    {
        int age;
        float h;
        Person(int a, float h1)
        {
            age = a;
            h = h1;
        }
    };
    struct myCamp
    {
        bool operator(Person const $p1, Person const$p2)
        {
            p1.h < p2.h;
        }
    };
    priority_queue<Person, vector<Person>, myCamp> prs;
    return 0;
}

// push pop are logn
// empty size top 1

// Applications -> Diskstra Algo
// -> Prim Algo
// -> Huffman Algo
// ->Heap Sort
// ->Any other place where heap is used;