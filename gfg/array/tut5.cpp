// largest elemnt in the array

// i/o-> arr[] ={10,5,20,8}
// o/p->2(index 0f 20)

// i/o-> arr[] ={10,5,20,8,100}
// o/p->4 (index of 100)

// navive approach

int largest(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
                flag = false;
            break;
        }

        if (flag == true)
            return i;
    }
    return -1;
}

    // this line will never be reached.
    // time complexity theta n^2(worst)
    // time complexity theta n(best)

    // a1 a2 a3.....a(i-1) ai....
    // <----largest-------->

    // ai<=alargest -> ignore
    // ai> largest -> largest =i;

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
