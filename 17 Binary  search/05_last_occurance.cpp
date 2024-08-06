// last occurance

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// iterative approach
int lastOccurance(int *arr, int target, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > target)
            e = mid - 1;
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}


int main()
{
    int arr[] = {1, 3, 3, 3, 3, 4, 5, 6, 7};
    // ITERATIVE  solution call
    cout << lastOccurance(arr, 4, 9);
    // RECURSIVE SOLUTION CALL
    //  cout << firstOccurance(arr, 7, 0, 8, INT_MAX);

    return 0;
}
