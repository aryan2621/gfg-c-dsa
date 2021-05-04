// second largest array

// i-> arr[]={10,5,8,20}
// o-> 0 index of 10

// i-> arr[] ={10,10,10}
// o-> no largest -1

// int secondLargest(int arr[], int n)
// {
//     // int largest = getLargest(arr, n);
//     int res = -1;

// there is chances that there is no second largest.

//     for (int i = 0; i < n; i++)
//     {
//         // if (arr[i] != arr[largest])
//         {
//             if (res == -1)
//             {
//                 res = i
//             }
//             else if (arr[i] > arr[res])
//             {
//                 res = i;
//             }
//         }
//     }
// }

int getLargest(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
            res = i;
        // theta n
    }
    return res;
}

// efficient largest

// a1 a2 a3 a4 ...a(i-1) a(i)
//<---largset----->

// a[i]>a[larget] res=largest largest=i
// a[i]==a[largest] ignore
// a[i]<a[largest]
// case1 res=-1 res=i
// case2 a[i]<=a[res] ignore
// case3 a[i]>a[res] res=i

int secondLargest(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
        return res;
    }
}