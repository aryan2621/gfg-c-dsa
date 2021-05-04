// analysis of common loops
int c, n;

for (int i = 0; i < n; i = i + c)
{
    // some θ(1) work;some coonstants work
}

// θ(n/c) this loop runs
// θ(n/c)-> θ(n) c is ignored
// n=10 c=2 0 2 4 6 8
// 10/5 equal to 2

for (int i = 0; i < n; i = i - c)
{
    // some θ(1) work; some coonstants work
}
// n=10 c=2;
// 10 8 6 4 2
//  n=11
// 11 9 7 5 3 1

// θ(n/c) this loop runs
// θ(n/c)-> θ(n) c is ignored

for (int i = 0; i < n; i = i * c)
{
    // some θ(1) work; some coonstants work
}

// n=32 c=2
// 1 2 4 8 16

// n=33 c=2;
// 1 2 4 8 16 32

// general --------->

//  1 c c^2 c^3...........c^k-1
// c^k-1 <n
// total  number of times it runs is k
// take log on both sides
// k<logn +1
// θ(logn)

for (int i = 0; i < n; i = i / c)
{
    // some θ(1) work; some coonstants work
}
// n=32 c=2
// 32 16 8 4 2

// n=33 c=2
// 33 16 8 4 2

// general --------->
// θ(logn)

for (int i = 0; i < n; i = pow(i, c))
{
    // some θ(1) work; some coonstants work
}

// c=2 n=32
//  2 2^2 4^2.....
// 2 4 16 ..
// 2 2^c ,(2^c)^c..
// 2 2^c 2^c^2 ....2^c^k-1..
// 2^c^k-1<n;
// on taking log on both sides
// k<logbaseclogbase2n +1;
// θ(loglogn)

void func(int n)
{
    for (int i = 0; i < n; i++)
    {
        // some θ(1) work; some coonstants work
        // θ(n)
    }
    for (int i = 1; i < n; i = i * 2)
    {
        // some θ(1) work; some coonstants work
        // θ(logn)
    }
    for (int i = 1; i < 100; i++)
    {
        // some θ(1) work; some coonstants work
        // θ(1)
    }
}

// find time complexity and add them
// θ(n) + θ(logn) + θ(1)
// θ(n)

void func(int n)
{
    for (int i = 0; i < n; i++)
    {
        //θ(n)

        for (int j = 1; j < n; j=j*2)
        {
            // θ(logn)
            // some θ(1) work; some coonstants work
        }
    }
}
// θ(n)*θ(logn)=θ(nlogn)

void func(int n)
{
    for (int i = 0; i < n; i++)
    {
        //θ(n)

        for (int j = 1; j < n; j=j*2)
        {
            // θ(logn)
            // some θ(1) work; some coonstants work
        }
    }

// for above loop its θ(nlogn)


 for (int i = 0; i < n; i++)
    {
        //θ(n)

        for (int j = 1; j < n;j++)
        {
            // θ(n)
            // some θ(1) work; some coonstants work
        }
    }
// for above loop its θ(n^2)

}

// θ(nlogn) +  θ(n^2)
//  θ(n^2)