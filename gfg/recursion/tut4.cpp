// // find sum of digits in a number;

// // i->234;
// // o-> 9;

// // i-> 2345;
// // o->14;

// #include <iostream>
// #include <cstring>

// int fun(int n)
// {
//     if (n < 10)
//         return n;
//     return fun(n / 10) + n % 10;
// }

// //  rope of length n you need to find maximu number of pieces you can make
// // such that length of every piece is in set {a,b,c} for given values a,b,c;

// // i-> n=5 a=2  b=5 c=1
// // o-> 5;

// // i-> 5 a=4 b=2 c=6;
// // o-> -1

// //  base case are always the root cases
// int maxCuts(int n, int a, int b, int c)
// {
//     if (n == 0)
//         return 0;
//     if (n < 0)
//         return -1;

//     // int res = maxCuts(n - a, a, b, c), maxCuts(n - b, a, b, c), maxCuts(n - c, a, b, c);
//     // if (res == -1)
//     return -1;
//     // return res + 1;
// }

// // worst-> time complexity -> O(3^n)

// //  string is given print all the subsets of it(in any order);

// // i-> "abc";
// // o-> "","a","b","c","ab","bc","ac""abc";

// void PrintSub(string str, string curr = "", int index = 0)
// {
//     if (index == str.length())
//         std::cout << curr << " ";
//     return PrintSub(str, curr, index + 1);
//     PrintSub(str, curr + str[index], index + 1);
// }
// int main()
// {
//     PrintSub("ABC")
// }
