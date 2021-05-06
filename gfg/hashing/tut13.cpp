// unordered map in c++

// used to store keys value pairs
// uses hashing
// no ordered keys

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    unordered_map<string, int> m;

    // insert m[key]=value;
    // this can be use to acces too;

    m["gfg"] = 20;
    m["ide"] = 30;
    m.insert({"rishabh ", 20});

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    // Find;
    if (m.find("ide") != m.end())
    {
        cout << "Founded" << endl;
    }
    else
    {
        cout << "Not Founded" << endl;
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // Count
    if (m.count("gfg") > 0)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    //size
    cout << m.size() << endl;

    // erase
    m.erase("ide"); // -> remove this key and corresponding value;
    m.erase(m.begin());

    m.erase(m.begin(), m.end());
    return 0;
}



// begin end size empty -> O(1)

// count find erase insert [] at ->O(1) average