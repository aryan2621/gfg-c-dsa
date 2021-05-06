// Implementation of open addressing;

//  | 49 | 56 | 72 | -1 | -1 | -1 |

// after earsing the 56

// | 49 | -2 | 72 | -1 | -1 | -1 |

// -1 for empty slots and -2 for the deleted values;

// MyHash mh(7);
// mh.insert(49);
// mh.insert(56);
// mh.insert(72);
// if (mh.search(56) == true)
//     print("YES") else
//     {
//         print("NO");
//     }
// mh.erase(56);
// if (mh.serach(56) == true)
//     print("YES");
// else
// {
//     print("NO:
// }

// code for open addressing(linear probing);

struct MyHash
{
    int *arr;
    int cap, size;
    MyHash(int c)
    {

        cap = c;
        size = 0;
        for (int i = 0; i < cap; i++)
        {
            arr[i] = -1;
        }
    }
    int hash(int key)
    {
        return key % cap;
    }
    bool search(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
                return false;
        }
    }
    bool insert(int key)
    {
        if (size == cap)
        {
            return false;
        }
        int i = hash(key);
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
        {
            i = (i + 1) % cap;
        }
        if (arr[i] == key)
        {
            return true;
        }
        else
        {
            arr[i] = key;
            size++;
            return true;
        }
    }
    bool erase(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -1;
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
            {
                return false;
            }
        }
        return false;
    }
};


// how to handle -1 and -2 as keys;

// we handle the empty as making the check through pointer and then checking if the value is null or not.
// we create a dummy node for deletion case.