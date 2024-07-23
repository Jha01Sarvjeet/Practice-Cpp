/*Given an array of distinct integers candidates and a target integer target,
 return a list of all unique combinations of candidates where the chosen numbers
sum to target. You may return the combinations in any order.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void combinationSum(vector<vector<int>> &ans, vector<int> temp, vector<int> &candidates, int target, int idx)
{
    if (target == 0)
        ans.push_back(temp);
    if (target < 0)
        return;
    for (int i = idx; i < candidates.size(); i++)
    {
        temp.push_back(candidates[i]);
        combinationSum(ans, temp, candidates, target - candidates[i], i);
        temp.pop_back();
    }
}
int main()
{
    vector<vector<int>> ans;
    int target = 8;
    vector<int> nums = {2, 3, 5};
    combinationSum(ans, {}, nums, target, 0);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
