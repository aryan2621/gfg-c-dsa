// base cases
// in  a recursion.

// absence will lead to the  stack overflow error;

int fact(int n)
{
    if (n <= 0)
    {
        // base cases
        return 1;
    }
    return n * fact(n - 1);
}

// fact3-> fact2 -> fact1 -> fact0
// in case of wrong base case as n==1
// then  fact0-> fact-1 -> fact-2; ans so on which is wrong analysis;
// segment error;



int fabonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fabonacci(n - 1) + fabonacci(n - 2);
}

// fib2- -> (fib1 + fibb0)
// fib(3)->fib(2)->(fib1 + fib0);
//  |_________________________-> fib(0)

// if there is only n==0 return 0

// then fib(1) will call for fib(n-2) => fib(-1)

