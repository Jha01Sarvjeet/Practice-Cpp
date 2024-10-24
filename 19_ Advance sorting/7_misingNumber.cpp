/*Given an array nums containing n distinct numbers in the range [0, n],
return the only number in the range that is missing from the array.*/

// [9,6,4,2,3,5,7,0,1]
// o/p=8

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Brute force approach
int missingValue(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i <=n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
            return i;
    }
}
int main()
{
    vector<int> arr = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    int missValue = missingValue(arr);
    cout <<"missing Value in array is "<<missValue<<endl;
}