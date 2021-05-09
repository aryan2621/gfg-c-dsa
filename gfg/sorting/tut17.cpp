// Heap sort -> based on selection sort;

//  it uses the same idea of selection sort but with some optimisation like;
// doing the searching but with the help of max heap;
// we are given an array and basically we do is rearrange them

// steps

//  1.Convert the array into a Binary tree;
// for sorting in the ascending (max heap) for sorting in the descending order(min heap);

// 2. Convert the binary tree into a max heap;
// call the maxheapify untill the whole array gets sorted

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void maxHeapify(int arr[], int n, int i)
{
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }
}

// How to get index;?
// parent=i-1/2
// hence index of parent of last is n-1-1/2 =n-2/2
// Time complexity of Build Heap is O(n);

// 3.Rpeatedlly swap root with last node reduce heap size by one and heapify.
void HeapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int i = n - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

// Time Complexity -> O(nlogn);
// best in case of Comparison based sorting
