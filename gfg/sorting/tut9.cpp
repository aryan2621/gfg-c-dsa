// Partition of a given array

// i-> arr[] ={ 3 8 6 12 10 7}

// p=5 // Index of the last element

// o-> arr[] ={3 6 7 8 12 10}
//              OR
//            {6 3 7 12 8 10}

// given an index find its value and then create a partition like all the smaller numbers than that should come
// before and larger number after that.

// Example arr[] = {5 13 6 9 12 11 8}
//  p = 6 l = 0 h =5

void partition(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], index = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
        for (int i = l; i <= h; i++)
        {
            if (arr[i] > arr[p])
            {
                temp[index] = arr[i];
                index++;
            }
        }
        for (int i = l; i <= h; i++)
        {
            arr[i] = temp[i - l];
        }
    }
}

// Auxiliary Space O(n) 
// Time :O(n)