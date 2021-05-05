// hashing introductions

//  ____________________________
// |                           |                                         _____________________
// |                           |                                       0 |                   |
// |                           |                                       1 |___________________|
// |                           |          __________________             |                   |
// |    universe               |--------> |                 |--------->  |___________________|
// |       of                  |          |  hash functions |            |                   | (Hash Table)
// |      keys                 |          |_________________|            |                   |
// |                           |                                         |                   |
// |                           |                                     m-1 |___________________|
// |___________________________|

//direct address table method doesnt work in large keys as index
// like index as string ,float.
// take the keys pass through hash function so that these large keys can be make usable to index in array.

// how hash functions works?

// should map a large keys for same small key;
// should generate values from 0 to m-1;
// should be fast ,O(1) for integer and O(len) for string of length "len";
// should uniformly distribute large keys into hash table slots;

// example

// h(large_keys) =large_keys%m;
// avoid the m as power of 10 or those prime numbers which are close to power of 10;
// chose special whole numbers;
// str[]="abcd";
// (str[0]*x^0 + str[1]*x^1 + str[2]*x^2 + str[3]* x^3) % m;
// universal hashing;

// hash table size generally depends on the size of keys you are inserting;
