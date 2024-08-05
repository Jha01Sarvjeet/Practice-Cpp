// to print power set of set
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void powerSet(vector<int> temp, vector<int> original, int idx, vector<vector<int>> &ans)
{
    if (idx == original.size())
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(original[idx]);
    powerSet(temp, original, idx + 1, ans);
    temp.pop_back();
    powerSet(temp, original, idx + 1, ans);
}
int main()
{

    vector<vector<int>>ans;
    powerSet({},{1,2,3},0,ans);
    for(auto i :ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;

    }


    return 0;
}