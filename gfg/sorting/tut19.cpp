// Radix sort algo

// same like as counting sort;
// so why radix sort?
// advantage is it works linearly even the range of input is large;
// its not a comparison based algorithms;

//319 212 6 8 100 50

// Rewriting number with leading zeros;
// 319 212 006 008 100 050

// stable sort according the last digit (least significant digit);
// 100 050 212 006 008 319

// stable sort according to the middle digit;
// 100 006 008 212 319 050

// // stable sort according to the first digit;
// 006 008 050 100 212 319

// arr[]={319 212 6 8 100 50}
// max=319

// counting(arr,6,1)
// counting(arr,6,10)
// counting(arr,6,100)

// counting(arr,6,1) index=(arr[i]/1)%10;

// count[10] ={2 0 1 0 0 0 1 0 1 1}
// count[10] ={2 2 3 3 3 3 4 4 5 6}

// arr[] ={100 50 212 6 8 319}


// counting(arr,6,10) index=(arr[i]/1)%10;

// count[10] ={3 2 0 0 0 1 0 0 0 0}
// count[10] ={3 5 5 5 5 6 6 6 6 6}

// arr[] ={100 6 8 212 319 50}



// counting(arr,6,100) index=(arr[i]/1)%10;

// count[10] ={3 1 1 1 0 0 0 0 0 0}
// count[10] ={3 4 5 6 6 6 6 6 6 6}

// arr[] ={6 8 50 100 212 319}



void counting(int arr[], int n, int exp)
{
    int count[10];
    int output[n];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    for (int i = 0; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[(arr[i] / exp) % 10 - 1] = arr[i];
        output[(arr[i] / exp) % 10 - 1]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        // theta n
        if (arr[i] > max)
        {
            max = arr[i];
        }
        for (int exp = 1; max / exp > 0; exp = exp * 10)
        {
            // theta (d*(n+b))
            counting(arr, n, exp);
        }
    }
}


// Time Complexity-> theta (d*(n+b))
// Space Complexity-> theta(n+b);
