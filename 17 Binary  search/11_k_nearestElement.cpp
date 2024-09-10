#include <bits/stdc++.h>
#include <iostream>
// to print the k nearest element
using namespace std;

vector<int> knearestelement(vector<int> arr, int k, int target)
{
    int arrlen = arr.size();
    int t = 0;
    vector<int> ans(k); // final answer
    // Case 1 : if target is not present and less than first element
    if (arr[0] > target)
    {
        for (int i = 0; i < k; i++)
        {
            ans[t++] = arr[i];
        }
        return ans;
    }

    // Case 2  : if target is not present and greater  than last element
    if (arr[arrlen - 1] < target)
    {
        t = k - 1;
        int temp = arrlen - 1;
        for (int i = t; i >= 0; i--)
        {
            ans[i] = arr[temp--];
        }
        return ans;
    }

    // case 3: element is present  or not
    // finding element is present or not
    int s = 0;
    int e = arrlen - 1;

    int mid = -1;
    bool flag = false;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            flag = true;
            ans[t++] = arr[mid];
            break;
        }
        else if (arr[mid] > target)
            e = mid - 1;
        else
        {
            s = mid + 1;
        }
    }
    // if element is not found
    int lb = e;
    int ub = s;
    if (flag == true)
    {
        lb = mid - 1;
        ub = mid + 1;
    }
    while (t < k && lb >= 0 && ub < arrlen)
    {
        int dif1 = abs(target - arr[lb]);
        int dif2 = abs(target - arr[ub]);
        if (dif1 > dif2)
        {
            ans[t++] = arr[ub++];
        }
        else
        {
            ans[t++] = arr[lb--];
        }
    }
    while (t < k && lb >= 0)
    {
        ans[t++] = arr[lb--];
    }
    while (t < k && ub < arrlen)
    {
        ans[t++] = arr[ub++];
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 1,1,10,10,10};
    int x = 9;
    int k = 1;
    vector<int> result = knearestelement(arr, k, x);
    sort(result.begin(), result.end());

    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << endl;
}