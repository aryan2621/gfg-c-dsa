// searching in an array.

// unsorted array.
// i/o-> arr[]={20,5,4,6,7,25}
// x=5;
// o/p ->1

// i/o-> arr[]={20,5,4,6,7,25}
// x=15;
// o/p ->-1

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
        // O(n) time complexity
    }
    return -1;
}

// sorted array
// O(logn) // time comlexity

// insertion
// cant insert in full size array

// i/o-> arr[]={20,5,4,6....}
// x=7;
//pos=2;
// o/p arr[]={20,7,5,4,6.....}

// i/o-> arr[]={20,5,4,6....}
// x=3;
//pos=1;
// o/p arr[]={3,20,5,4,6.....}

int insert(int arr[], int n, int x, int top, int pos)
{
    if (n == top)
        return n;
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return n + 1;
}
// time complexity O(n)
// best case O(1)
// worst case  theta(n)

