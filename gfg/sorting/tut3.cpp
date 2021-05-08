// bubble sort -> Comparison based sort and takes O(n^2);
// Multiple sort
// Moves large element to the last place in the 1 pass.
// After then we move the second largest to the second last postion;
// we keep doing it until the whole array get sorted;

//  | 2  | 10  | 8  |7   |
//  |  2 |  10 |  8 |  7 |  -> Ist pass max element reaches to the final position
//  |  2 | 8  | 10  | 7  |
//  |  2 | 8  | 7  | 10  |

//  | 2  | 10  | 7  |10  |
//  |  2 |  8 |  7 |  10 |  -> IInd pass second max element reaches to the final position
//  |  2 | 7  | 8  | 10  |

//  | 2  | 7  | 8  |10   |
//  |  2 |  7 |  8 |  10 |  -> IIIrd pass Third max element reaches yo the final position

// n-1 passes happen;
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        // for (int j = 0; j < n-i - 1; j++)// optimised loop
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Time Complexity -> n*(n-1)/2 = theta n^2;

// Optimised Bubble Sort;

//  j=0 | 3  | 5  | 10  |20   |40   |
//  j=1 | 3  | 5  | 10  | 20  | 40  |
//  j=2 |3   | 5  | 10  | 20  | 40  |
//  j=3 |  3 | 5  | 10  | 20  | 40  |

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

// stability ->its  stable and thats why never changes position of equal  elements;