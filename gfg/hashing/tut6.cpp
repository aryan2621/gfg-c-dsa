// chaining

// hash(key) =keys%7;
// keys -> 50,21,58,17,15,49,56,22,23,25;

//    hash tables(array of linkedlist headers)
//      ____________
//    0 |____21_____|->49->56
//    1 |__50_______|->15->22
//    2 |___58______|->23
//    3 |___17______|
//    4 |____25_____|
//    5 |___________|
//    6 |___________|
//    7 |___________|
//    8 |___________|
//    9 |___________|

// performance in chaing

// m =no of slots in hash tables;
// n=  no of keys to be inserted ;
// load factors alpha =n/m;
// exected chain length=alpha;

// expected time to search =O(1+alpha);
// expected time to insert /delete =O(1+alpha);

// data structures for storing chains 
//   |
//   |__> linked list 
//   |
//   |
//   |
