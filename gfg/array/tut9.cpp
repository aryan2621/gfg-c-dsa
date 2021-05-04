// i-> arr[]={1,2,3,4,5}
// o-> arr[] ={5,1,2,3,4}

void rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1];
    }
    arr[n - 1] = temp;
}