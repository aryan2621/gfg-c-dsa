//  Search

// i-> arr[]={10,20,30,40,50,60}
// x=20
// 1

// i-> arr[]={5,15,20}
// x=25
// -1

// Linear Search

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}

// theta (n)

// Binary Search

// steps compute mid = [(low+high)/2]
// case 1 (arr[mid] == x);
// return mid
// case 2 (arr[mid]>x);
// high = mid-1
// case 3 (arr[mid]<x);
// low = mid+1;

int search1(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
