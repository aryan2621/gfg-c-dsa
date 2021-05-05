// print write from n to 1;
// 5 4 3 2 1

#include <iostream>
#include <string>

void print(int n)
{
    if (n == 0)
        return;
    std::cout << n << " ";
    return print(n - 1);
    // line -1
}
// fun5 -> print5+ fun4-> print4 + fun(3)-> print(4)+ fun3......

// write a program from 1 to n;
// 1 2 3 4 5

void fun(int n)
{
    if (n == 0)
        return;
    fun(n - 1);
    std::cout << n << " ";
}

// print runs faster than fun;

// as print is tail recursion
// tail recusrion ->a function in which the last thing is the recursion nothing happens after that.
// parents doenst need to to anything after that.

//in the tail recusrisve function ->
// what happens in it is that in this tail call elimination ->
// simply modify the parameters as
// line1 can be written as n=n-1 go to start

// rewrite the same fun function but now in tail recursive manner;

void fun1(int n, int k = 1)
{

    if (n == 0)
        return;
    std::cout << k << " ";
    fun1(n - 1, k + 1);
}

// rewrite the factorial funtion as tail recusrive ;

int fact1(int n, int value = 1)
{
    if (n == 0)
        return value;
    return fact1(n - 1, n * value);
}

// check a string is palindrome;

//  str="aabbaa";
// o-> yes

// str="geeks";
// o-> no

// initially s=0; e=n-1(string strength)

bool isPal(string str, int s, int e)
{
    if (s == e)
        return true;

    if (s > e)
        return true;

    if (str[s] != str[e])
        return false;
    return isPal(str, s + 1, e - 1);
}