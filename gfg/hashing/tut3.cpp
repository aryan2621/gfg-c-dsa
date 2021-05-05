// direct address table;

// imagine a situation where you have 1000 keys and values from (0 to 999)
// how would you implement in O(1) time

// search
// insert
// delete

// example -> insert(10)
// insert(20)
// search(10)
// delete(10)
// search(10);

// make a boolean array of size 1000 by initialising every value as 0
// for insert(x) make value of x position 1
// for search return yes or no;
// for delete(x) convert value of x again to 0;

// all these operation will be in O(1)
#include <iostream>
using namespace std;


int table[1000] = {0};
int i = 0;

void deleteX(int i)
{
    table[i] = 0;
}
bool search(int i)
{
    return true;
}
void insert(int i)
{
    table[i] = 1;
}


// it can handle only smaller keys as values
