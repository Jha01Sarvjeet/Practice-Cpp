// Print all the increasing sequences of length k from first n natural numbers.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void increasingSequence(int n, int k, int curr, vector<int> ans)
{
    if (ans.size() == k)
    {
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
        return;
    }
    for(int i=curr; i<=n;i++){
        ans.push_back(i);
        increasingSequence(n,k,i+1,ans);
        ans.pop_back();


    }
}
int main()
{
    increasingSequence(3, 2, 1, {});

    return 0;
}