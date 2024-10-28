/*Check if array can be partitioned into 2 continuous arrays of equal sum*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool checkArrayPartition(vector<int> arr)
{
    // initially converting array into array of prefix sum
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == (arr[n - 1] - arr[i ]))
        {
            
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5,5,10};
    bool result = checkArrayPartition(arr);
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    if (result)
        cout << "yes! it can be partitioned\n";
    else
    {
        cout << "Sorry! it cannot be partitioned\n";
    }
}