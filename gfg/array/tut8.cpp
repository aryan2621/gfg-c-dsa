// reverse an array;

// i-> arr[] ={10,5,7,30}
// o-> arr[]={30,7,5,10}

void reverse(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (high > low)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        high--;
        low++;
        // time complexity ->theta n;
        // auxiliary space ->theta 1;
    }
}
