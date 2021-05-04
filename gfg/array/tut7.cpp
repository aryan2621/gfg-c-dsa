// move all zeros to end;

// i-> arr[]={8,5,0,10,0,20}
// o-> arr[]={8,5,10,20,0,0,0}

// i->arr[]={10,20}
// o->arr[] ={10,20}

//nave approach

void func(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    //    swap(arr[i],a[j]);
                }
                // time complexity O(n^2)
            }
        }
    }
}

// efficient method

void moveToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            //    swap(arr[i],arr[count]);
            count++;
        }
    }
}
