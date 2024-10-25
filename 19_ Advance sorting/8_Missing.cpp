/*Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all 
the integers in the range [1, n] that do not appear in nums. */

/*Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> missingValue(vector<int> arr)
{
    int n = arr.size();
    int i = 0;
    while (i < n)
    {
        int originlIndex = arr[i] - 1;
        if (arr[originlIndex] == arr[i] || originlIndex == i)
            i++;
        else
        {
            swap(arr[i], arr[originlIndex]);
        }
    }
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
            result.push_back(i + 1);
    }
    return result;
}
int main()
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = missingValue(arr);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}