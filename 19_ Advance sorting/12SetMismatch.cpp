/*You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately,
 due to some error, one of the numbers in s got duplicated to another number\
  in the set, which results in repetition of one number and loss of another
  number.

You are given an integer array nums representing the data status of this set
after the error.

Find the number that occurs twice and the number that is missing and return
 them in the form of an array.*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void cycleSort(vector<int>& arr) {
    int n = arr.size();
    int i = 0;

    while (i < n) {
        int correctIndex = arr[i] - 1;

        // Check if the element is at the correct position or if it's a duplicate
        if (arr[i] != arr[correctIndex]) {
            swap(arr[i], arr[correctIndex]);
        } else {
            i++;
        }
    }
}
vector<int>  setMismatch(vector<int> arr)
{   cycleSort(arr);
    vector<int>ans;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=i+1){
            ans.push_back(arr[i]);
            ans.push_back(i+1);
            return ans;
        }
    }
}
int main()
{
    vector<int>arr={3,2,2};
    cout<<"Given Array\n";
    vector<int>result=setMismatch(arr);
    for(auto i:result)cout<<i<<" ";cout<<endl;
}