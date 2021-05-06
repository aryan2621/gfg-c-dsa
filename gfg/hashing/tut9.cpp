// double hashing -> hash(key,i) =(h1(key)+h2(key))%m;

// some facts about double hashing->

// 1. if h2(key) is relatively prime to m then its always a free slot if there is one
// 2. distribute keys more uniformly than linear probing and quadratic hashing;
// 3. no clustering

// hash(key,i) =(h1(key)+h2(key)) % m;
// m=7 h1(key) =(key%7); h2(key) = 6-(key % 6); values range from(1-5)
// values are 49,63,56,52,54,48;

//       _______________
//    0  |________49____
//    1  |______________
//    2  |_________54___
//    3  |________63____
//    4  |________56____
//    5  |_________52___
//    6  |_________48___
//    7  |______________

// in start i =0;
// if collision occurs increment then we use the h2 part and after this we increase the value by one
// if again collision occurs we just again increase the value of i and do the same untill we got the empty slot.

// why h2(key) and m should be relatively prime?
// why its give gurantee that we always ifnd an empty slots.

// (1 * 6) % 7 = 6;
// (2 * 6) % 7 = 5;
// (3 * 6) % 7 = 4; h2(key) =6;
// (4 * 6) % 7 = 3;
// (5 * 6) % 7 = 2;
// (6 * 6) % 7 = 1;

// 6 and 7 are retively prime;

// void doubleHashing(key)
// {
//     if (table if full)
//         return error;
//     probe = h1(key), offset = h2(key);
//     while (table[probe] is occupied)
//     {
//         probe = (probe + offset) % m;
//         table[probe] = key;
//     }
// }
// inlinear probing offset -> 1;
// search will work similiar to insert;



// Performance analysis of search(unsuccessfull);

// alpha = n/m should(be <=1)
// Assumption : Every probe sequence looks at a random location;
// (1-alpha ) Fraction of the table is empty
// Expected no of probs required = ? (1/1-alpha)


// alpha =0.8 means 80 % of slots are filled;
// so you will find almost 5 iterations to find empty slots
// alpha = 0.9 means 90% of slots are filled;
// so you will find almost 10 iterations to fund empty slots;

