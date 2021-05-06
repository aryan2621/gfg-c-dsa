// open addressing;

// no of slots in hash tables >= no of keys to be inserted;
//cache frienly;

// it occur  by using the single array no any other data structure;
// in this we are consider liinear probing;

// 50,51,49,56,15,19;
// hash(key) =key % 7;

//        _____________
//      0 |_____49_____
//      1 |_____50_____
//      2 |_____51_____
//      3 |_____16_____
//      4 |_____56_____
//      5 |_____15_____
//      6 |_____19_____

// linearly probing say-> linealy searh for the next empty slot, in case of collision.
// in case when u reached last you make the search in circular manner anti-clockwise.

// 48,42,50,55,53;
// hash(key) =key % 7;

//        _____________
//      0 |_____42_____
//      1 |_____50_____
//      2 |_____55_____
//      3 |____________
//      4 |_____53_____
//      5 |____________
//      6 |_____48_____

// how to implement delete in the open addressing ?
// first consider the search only then you are able to understand.

// insert(50) ,insert(51),insert(15), search(15),search(64), delete(15),search(15);
// hash(key) =key%7;
// if search make a whole complete loop we say that value is not present;

// search -> wecompute hash function
// we go the index and compare
// if we find we return ,otherwiase we linearly search
// we stop either by search become true or we encounter the empty slot or we make a complete loop.

// problem with simply making a slot empty(by deleting);
// if we just remove an element and then if we make search of an element just above the deleted one
// and in case its not present there and when the cursor moves to deletd slot
// it found it empty and simply the search stop;
// so for continuing the search we make the delete slot as deleted not empty.

// clustering (A problem with linear probing);

//    _______________
//    |
//    |
//    |
//    |concertarion
//key |of the values
//    |in middle
//    |which make
//    |this place
//    |crowdy
//    |______________

// by which all the operations will become costly;

// how to handle clustering problem with linear probing

// h(key) =key7;

// linear probing;
// hash(key,i) =(h(key)+i)%7;

// quadratic probing;
// hash(key,i)= (h(key) + i^2) %m;(secondary cluster)
// even in this the problem of clustering  is still there;
// this method works fine if 1.alpha <0.5 and 2.m is a prime;


// double hashing;
// hash(key ,i) =(h1(key)+ i*h2(key)) %m;