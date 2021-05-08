// Insertion sort -> simplest algorithms.

// Time complexity-> O(n^2) worst case
// In-place  and stable
// used in practise for small arrays (used in Timsort and Introsort)
// sort inbuilt in algorithms.h is combination of merge sort ,quick sort and insertion sort
// O(n) is best case;
// use those sort which use recursion in large arrays only;
// extra space require for the insertion sort is O(1).

// steps we start from the index 1 to index n-1 and make sure that before index 1 all the things are sorted
// we keep incrementing the index 1 to 2 to 3 and so on and the array before it get sorted.

// This is the first cycle .

//   | sorted |                     |
//            i-1
// 50 20 40 60 10 30
// i=1  key=arr[i] =20 j=0

// 50 50 40 60 10 30
// j=-1
// arr[j+1] =key
// arr[0]  =20
// 20 50 40 60 10 30

// This is the second cycle .

// i=2 key=arr[i]=40
// j=1
// 20  50 50 60 10 30
// arr[1]=key
// 20 40 50 60 10 30

// This is the third cycle .

//i=3 key = arr[i] = 60
//60 will overrite itself.

// This is the fourth cycle .

// i=4 key =arr[i] =10
// j=3
// 20 20 40 50 60 30
// j=-1
// and then
// 10 20 40 50 60 30

// This is the fifth cycle .

// i=5 key =arr[i] =30
// 10 20 40 40 50 60
// and then swapping
// 10 20 30 40 50 60

void iSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// best case -> array already sorted; theta n^2
// worst case -> sorted but reverse manner;
