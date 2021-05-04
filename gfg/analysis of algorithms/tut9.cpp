// space complexity
// order of growth of memory or RAM space in terms of input size.
// memroy taken or RAM amount taken;

int getSum(int n)
{
    return n * (n + 1) / 2;
    // amout of memory no exceed
    // independent of memory
    // O(1)
}

int getSum(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
        //three variables hence memory not exceed.
        // O(1)
    }
    return sum;
}

int arrSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        // depends on n
        // theta(n)
    }
    return sum;
}

// Auxiliary space -> auxiliary space is order of growth of extra space or temp space in terms of input size.

int arrSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        // theta(n)
        // auxiliary space theta(1) a fixed size array;
    }
}

// space complexity < auxiliary space.
// decieding factor is auxilairy space

int fun(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n + fun(n - 1);
}

// fun5 + fun4 + fun3 + fun2 + fun1 +fun0 -eqn-1
// =>15
// even though it doesnt using the
// extra variable but still doesnt have theta1 space complexity.
// this need to store function call in function call stack.
// this stack excecute in opposite order of -eqn-1
// space complexity ->thetan

int fib(int n)
{
    if (n == 0 || n == 1)
        return 0;
    return fib(n - 1) + fib(n - 2);
}

int fib(int n)
{
    int f[n + 1];
    f[0] = 0;
    f[1] = 1;
    for (int i = 0; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    // space theta n
    // auxiliary theta n
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 0; i < 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
    //space theta 1
    //auxiliary theta 1

}
