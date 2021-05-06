// count frequncies of every element;
// i->{10,12,10,15,10,20,12,12}

// output

// 10-3
// 12-3
// 15-1
// 20-1
#include <iostream>
#include<bits/stdc++.h>


using namespace std;

void printCount(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i - 1; j >= 0; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            continue;
        int freq = 1;
        for (int j = i + 1; j < n; i++)
        {
            if (arr[j] == arr[i])
                freq++;
            cout << arr[i] << " " << freq << endl;
        }
    }
}



//efficient method;

void CountValue(int arr[],int n){
    unordered_map<int,int> mp;
    for (int i = 0; i <n; i++)
    {
       mp[arr[i]]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

// Time -> O(n);
// space-> O(n)