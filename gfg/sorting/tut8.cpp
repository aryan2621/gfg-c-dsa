// Merge Function of merge sort

// i-->a[]={10 15 20 40 8 11 15 22 25}
// l = 0 h = 8 m = 3
// o-> a[] ={18 10 11 15 15 20 22 25 40}

//  left[] ={ 10 15 20 40}
//  right[] ={8 11 15 22 25}

void merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[m + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        // this <= ensure that stability.
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];
}


// l <= m <h

// Time Complexity -> O(n1+n2)
// that is O(n)

//Auxiliary space -> O(n)