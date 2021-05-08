// Merge Sort Algorithms

//   |  10  |  5   |  30   |  15   |  7   |
// l=0                                    r=4
// sort two half and join them;


void merge(int arr[], int a, int b, int c)
{
}

void mergeSort(int arr[], int l, int r)
{
    if (r > l)
    {
        // for atleast 2 data in the array;
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}