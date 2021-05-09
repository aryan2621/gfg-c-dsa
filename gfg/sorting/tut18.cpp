// counting sort-> linear time algorithms when our input elements are in small range
// O(n+k) time to sort n elements in range from 0 to k-1;

// i-> arr[] ={1 4 4 1 0 1}
// k=5
// o-> arr[] ={ 0 1 1 1 4 4}

// i-> arr[]={2 1 8 9 4}
// k=10
// o-> arr[] ={1 2 4 8 9}

// arr[] ={1 4 4 1 0 1}
// k=5
// count[] ={1 3 0 0 2}
//           0 1 2 3 4

// i=0
// arr[] ={0,_,_,_,_};

// i=1;
// arr[]={0,1,1,1_,_};

// i=2
// i=3
// i=4
// arr[] ={0,1,1,1,4, 4}

void CountSort(int arr[], int n, int k)
{
    int count[k];
    for (int i = 0; i < k; i++)
    {
        count[i] = 0;
        // theta k
    }

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
        // theta n
    }
    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            arr[index] = i;
            index++;
            // theta n+k;
        }
    }
}

//overall Time Complexity-> theta n+k;

// naive implementation problems -> cant be used as a general puropse
/*
algorithms for sorting objects with multiple numbers 
like sorting of array of students of marks;
*/

// General purpose Implementation->
// n=6 k=5;
// arr[]={1 4 4 1 0 1}
// count[] ={1 3 0 0 2}

// count[] ={1 4 4 4 6}

// count[] ={1 4 4 4 6} this show the elemnts thats
// smaller or equal to their position number 4 at sec in count
// means in arr 1 1 0 1 total 4 lements are there smaller than 2

void countSort(int arr[], int n, int k)
{
    int count[k];
    for (int i = 0; i < k; i++)
    {
        count[i] = 0; // arr[]={1 4 4 1 0 1}
    }
    for (int i = 0; i < n; i++) // count[] ={1 3 0 0 2}
    {
        count[arr[i]]++;
    }
    for (int i = 1; i < k; i++)
    {
        count[i] = count[i - 1] + count[i];
    }
    int output[n];
    for (int i = 0; i >= 0; i--) //output[] ={ 0 1 1 1 4 4}
    {                            //            0 1 2 3 4 5
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i]; // copying in arr the output
    }
}

// stable because we are doing from right
// side and make sure that the position deonst get change


// n= 4 k=7
// arr[] ={5 6 5 2}
// count[] ={0 0 1 0 0 2 1}
// count[] ={0 0 1 1 1 3 4}

// output[] ={_,_,_,_};

// i=3
// output[] ={2 ,_,_,_}
// count[] ={0,0,0,1,1,3,4};

// i=2 
// output[] ={2 ,_,5,_}
// count[] ={0,0,0,1,1,2,4};

// i=3
// output[] ={2 ,_,5,6}
// count[] ={0,0,0,1,1,2,3};

// i=4
// output[] ={2 ,5,5,6}
// count[] ={0,0,0,1,1,1,3};


// important points 

// not a comparison algo
// theta(n+k);
// theta(n+k) auxiliary space;
// stable;
// used as subroutine in radix sort




