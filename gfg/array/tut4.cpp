// deletion in the array .

// i/o arr[] ={3,,8,12,5,6}
//x=12;
// o/p arr[]={3,8,5,6,_}

// i/p -> arr[] ={3,8,12,5,6}
// x=6;
//o/p-> arr[]={3,8,12,5,_}

// only fisrt occurance get deleted

int deleteInt(int arr[], int n, int x)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
        if (i == n)
            return n;
        for (int j = i; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        return n - 1;
    }
}

// insert O(n)
// search O(n) unsorted
        // o(logn)
// deletion O(n)

// get an element O(n)
// update an element O(n)
// delete at the end or insert in the begin -> O(1)



