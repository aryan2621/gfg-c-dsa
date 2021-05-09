// Quick sort algorithms
// considering  lomuto partition(put pivot in correct position and also the elements less than that placed before
// and the elements after that are higher)

// {8 4 7 9 3 10 5}

//   ________________________
//   |        |      |       |
//   |  <5    |   5  |   >5  |
//   |________|______|_______|
//    0  1     2    3  4  5  6

// Lomuto Partition->

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j < h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

void qSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        qSort(arr, l, p - 1);
        //        0  1
        qSort(arr, p + 1, h);
        //           3    6
    }
}

// considering the Lomuto Partition
