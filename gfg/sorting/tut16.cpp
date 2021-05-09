//  Choice of Pivot and worst case of quick sort

// Both the partitionn get into worst case if the array is already sorted.
// Quick sort is bad in case of when one element on one side and n-1 on other side;

// in practical we use the random number to decide which is should be use as the pivot;

//  p=random(l,r);
// and simple swap(arr[i],arr[p])
// -> Hoarse Partition.

// swap(arr[r],arr[p]);
// -> Lumoto Partition;