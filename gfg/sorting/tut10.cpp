// Lometo Partition

// arr[] ={10 80 30 90 40 50 70}
//       i=0     pivot =70    h=6

// assume pivot is always the last element;

//     _____________________________________________
//     |                    |              |        |
//     |   < pivot          |  >= pivot    |        |
//     |___________________ |______________|________|
//                         i  i+ 1      j-1  j

//              if(arr[i]<pivot)
//     _____________________________________________
//     |                    |              |        |
//     |   < pivot          |  >= pivot    |        |
//     |____________________|______________|________|
//                         i  i+ 1      j-1  j

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int lPartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j < h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}


// a[]={10 80 30 90 40 50 70}
// i=0 pivot =70          h=6

// i=-1 j=0
// { 10 80 30 90 40 50 70}

// i=0 j=1
// {10 80 30 90 40 50 70}

// i=0 j=2
// {10 30 80 90 40 50 70}

// i=1 j=3
// {10 30 80 90 40 50 70}

// i=i j=4
// {10 30 40 90 80 50 70}

// i=2 j=5
// {10 30 40 50 80 90 70}

// i=3 j=6
// we stop here j=h;

// we now do :
// swap(arr[i+!],arr[h]);
// return i+1;

// {10 30 40 50 70 80 90}


// Corner case :
// {70 60 80 40 30}

// {30 60 80 40 70}


//{30 40 20 50 80}
//{30 40 20 50 80}


// How to handle the case when the pivot is the last element/?

// {50 30 20 10 5 11}
// pivot=2
// just swap it with the last element and do the same as previous

// O(n)