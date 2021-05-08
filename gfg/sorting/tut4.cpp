// Selection sort -> Time Complexity theta n^2 in all cases .
// does less memory write compared to other like
// quick sort ,merge sort insertion sort .But cycle sort is optimal in terms of memory writes

// its just a Basic idea of Heap sort
// not stable;
// in place;

//    | 10   |  5  | 8   |  20  | 2   |   18 |

// we find the min element and place in first position ;
// we find the second minimum element and then place them on appropriate place and we continue this thing!

//naive solution

void selectSort(int arr[], int n)
{
    int temp[n];
    int INF = -1;
    for (int i = 0; i < n; i++)
    {
        int mid_ind = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[mid_ind])
            {
                mid_ind = j;
            }
            temp[i] = arr[mid_ind];
            arr[mid_ind] = INF;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

// Efficient Method for the same selection sort

//   |  10  |  5   | 8   | 20   | 2     | 18     |
// i=0 min_ind=4

//   |  2  | 5    |  8  |  20  |  10    | 18     |
// i=1 min_ind=1

//   |  2  | 5    | 8   |  20  | 10     | 18     |
// i =2 min_ind =2

//   |    2|  5   | 8   | 20   | 10     |18      |
// i=3 min_ind=4

//   | 2   | 5    | 8   |  10  | 20     | 18     |
// i=4 min_nd =5

//   | 2   | 5    | 8   | 10   |18      |  20    |
// i=5 min_ind =5

void selectsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
                swap(arr[min_ind], arr[i]);
            }
        }
    }
}

// why its not stable ?

// it pick the element and moves the to it correct position and hence disturb the arrangement

// Time Complexity -> theta n^2
