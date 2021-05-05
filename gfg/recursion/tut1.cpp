// recusrion-> solution  of smaller problems
// we solve big problems by breaking it problem into smaller problems.
// we keep breaking untll we reached the case which is un breakable;

// i-> 4
// o-> 24;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
// fact4-> fact3-> fact2-> fact1-> fact0
//  < - 24  < - 6 < - 2   < - 1   <-   1 <-

// the function calls get stored in the stack until they reached the base case
// and after that they use that value and start excecuting their previous calls;


#include <iostream>
using namespace std;

void fun(int n)
{
    if (n < 1)
        return;
    else
    {
        cout << n << " ";
        fun(n - 1);
        cout << n << " ";
    }
}
int main()
{
    fun(3);
}
// 3 2 1 1 2 3