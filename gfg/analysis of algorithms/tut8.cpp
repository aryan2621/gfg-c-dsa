// analysis of recursion

#include <iostream>
using namespace std;

void func(int n)
{
    if (n <= 1)
        return;

    for (int i = 0; i < n; i++)
    {
        cout << ("GFG");
    }
    func(n / 2); //-1
    func(n / 2); //-2
}

// T(n) = 2T(n/2) + θ(n);
// T(n) =two loops of n/2 and some contants + linear work.
// T(1) =c;

void func1(int n)
{
    if (n <= 1)
        return;
    cout << ("GFG");

    func(n / 2); //-1
    func(n / 2); //-2
}

// T(n) = 2T(n/2) + c;
// T(1) =c;

void func2(int n)
{
    if (n <= 0)
        return;
    cout << n;
    func2(n - 1);
}

//Recursion Tree Method;

// we write non recursive prat
// as root of tree and recusrive parts
// as children;
// we keep expanding children until we see pattern;

// Tn=2T(n/2) +cn;
// Tn =recusrive+ non recursive
// T(1) =c;

//                  cn;-----> cn
//                 /      \
//                /        \
//               /          \
//           T(n/2)           T(n/2)

//                   c(n)-------------> cn
//                 /      \
//                /        \
//               /          \
//             c(n/2)         c(n/2)-----------------> cn
//           /      \           /      \
//          /        \          /        \
//         /          \         /          \
//        T(n/4)        T(n/4) T(n/4)     T(n/4)

// now we just have to find out the height of the tree

//                   c(n)-------------> cn
//                 /      \
//                /        \
//               /          \
//             c(n/2)         c(n/2)-----------------> cn
//           /      \           /      \
//          /        \          /        \
//         /          \         /          \
//        c(n/4)        c(n/4) c(n/4)     c(n/4)--------------> cn

// logbase2 (n) -> height
// cn work at every level.
// cn +  cn + cn + cn + cn + cn + cn +.....(log n) times
// cn(log(n))
// θ(nlog(n))

// Tn=2T(n-1) +c;
// T(1) =c;
// number of children is decided by no of recusrive calls.

//                     c;-----> c
//                 /      \
//                /        \
//               /          \
//           T(n-1)           T(n-1)

//                   c-------------> c
//                 /      \
//                /        \
//               /          \
//             c                 c-----------------> 2c
//           /      \           /      \
//          /        \          /        \
//         /          \         /          \
//       T(n-2)        T(n-2) T(n-2)      T(n-2)
// in this we do the 4c works

// work will be like
// c+ 2c+ 4c ....height =n
// for reaching to height we just have to make it equal to the base case.
// c+ 2c+ 4c ....height =n;
// apply the gp formula
// θ(2^n)

// T(n) =T(n/2) +c;
// T(1) =c

//           c
//           |
//           |
//           |
//           |
//          T(n/2)

//           c--------->c
//           |
//           |
//           c------------>c
//           |
//           |
//          T(n/4)

// work done at every level is c
// height =
// c+  c+  c+  c+  c+  c+ ....log(n)
// c*logbase2n
//θ(log(n))

// T(n)=2T(n/2) +c;
// T(1) =c;

//                     c;-----> c
//                 /      \
//                /        \
//               /          \
//           T(n/2)           T(n/2)

//                     c;-----> c
//                 /      \
//                /        \
//               /          \
//              c            c-------------->2c
//           /      \       /      \
//          /        \      /       \
/          /          \     /        \
//        T(n/4)     T(n/4) T(n/4)   T(n/4)------------>4c

// c+ 2c +4c+......logn
//θ(n)




