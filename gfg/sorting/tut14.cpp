// quick sort using hoarse partition

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;

        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}

void qSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        qSort(arr, l, p);
        qSort(arr, p + 1, h);
    }
}

// lomuto partition-> it ensure that pivot comes to its original position and left right array are in thier form;
// hoarse partition -> it not ensure the correct position of the pivot but left right array are in correct form