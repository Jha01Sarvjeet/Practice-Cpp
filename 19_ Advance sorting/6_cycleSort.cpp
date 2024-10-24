/*Cycle sort :- used in such case when range of value of array is known -- its complexity is O(N)*/
/*eg:{5,1,3,2,4}*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void cycleSort(vector<int> &arr)
{
    int s = 0;
    int n = arr.size();
    int i = 0;
    while (i < n)
    {
        int correctIndex = arr[i] - 1;
        if (i == correctIndex)
            i++;
        else
        {
            swap(arr[i], arr[correctIndex]);
        }
    }
}

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int>arr={5,1,3,2,4};
   
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    cycleSort(arr);
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}