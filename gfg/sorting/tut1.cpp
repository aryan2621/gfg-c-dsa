// sort in c++ stl;
// sort -> library function in stl librarys which helps in the sort of the data structures that allows the random acess of
// data

// vector dequeue and array

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

struct Point
{
	int x, y;
};
bool myCmp(Point p1, Point p2)
{
	return (p1.x < p2.x);
}

int main(int argc, char const *argv[])
{
	int arr[] = {10, 20, 30, 40};
	int n = 4;

	// sort method -1
	sort(arr, arr + n);

	for (int x : arr)
	{
		cout << x << " ";
	}

	//sort method-2
	// order in which way you want the data to get sorted;
	sort(arr, arr + n, greater<int>()); // decresing order
	cout << endl;
	for (int x : arr)
	{
		cout << x << " ";
	}

	//vector
	cout << endl;

	vector<int> v = {5, 3, 5, 6, 7, 8};
	sort(v.begin(), v.end());
	for (int x : v)
	{
		cout << x << " ";
	}
	cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	for (int x : v)
	{
		cout << x << " ";
	}

	// custom  comparison

	cout << endl;
	Point arrs[] = {{2, 10}, {10, 20}, {3, 5}};
	sort(arrs, arrs + n, myCmp);
	for (auto i : arrs)
	{
		cout << i.x << " " << i.y << endl;
	}
	return 0;
}

// sort -> worst and avg case =O(nlogn);
// use the intro sort => hybrid of quick sort heap sort and the insertion sort;