// Bubble sort
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void bubbleSort(vector<int> &arr)
{
    bool flag = false;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(flag==false){
            return;
        }
        else{
            flag=false;
        }
    }
}
int main()
{
    vector<int> arr = {8,7,6,5,4,3,2,1};
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    bubbleSort(arr);
    for (int i : arr)
    {
        cout << i << " ";
    }
}