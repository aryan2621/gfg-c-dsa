// Recursive Binary search

int intSearch(int arr[], int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        return intSearch(arr, low, mid - 1, x);
    }
    else
    {
        return intSearch(arr, low, mid + 1, x);
    }
}

// Iterative search time Complexity -> O(logn) -> auxiliary Space -> O(1)
// Recursive search time Complexity -> O(logn) ->auxiliary space -> O(logn)
