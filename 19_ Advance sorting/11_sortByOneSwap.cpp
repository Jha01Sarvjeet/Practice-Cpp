/*Given an array where all its element are sorted in increaing order except
two swapped element , sort it in linear timr , assumne there  is no duplicate
 element

 Input:  arr[] = {10, 20, 60, 40, 50, 30}
// 30 and 60 are swapped
Output: arr[] = {10, 20, 30, 40, 50, 60}

Input:  arr[] = {10, 20, 40, 30, 50, 60}
// 30 and 40 are swapped
Output: arr[] = {10, 20, 30, 40, 50, 60}

Input:   arr[] = {1, 5, 3}
// 3 and 5 are swapped
Output:  arr[] = {1, 3, 5}
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void sortByOneSwap(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            int j = i - 1;
            while (j >= 0 && arr[i] < arr[j])
            {
                j--;
            }
            swap(arr[i], arr[j + 1]);
        }
    }
}
int main()
{
    vector<int> arr = {10, 20, 40, 30, 50, 60};
    cout << "Array before swapping" << endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    sortByOneSwap(arr);
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}