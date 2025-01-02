#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*here is a bookstore owner that has a store open for n minutes. You are given an integer array customers of length n where customers[i] is the number of the customers that enter the store at the start of the ith minute and all those customers leave after the end of that minute.
During certain minutes, the bookstore owner is grumpy. You are given a binary array grumpy where grumpy[i] is 1 if the bookstore owner is grumpy during the ith minute, and is 0 otherwise.
When the bookstore owner is grumpy, the customers entering during that minute are not satisfied. Otherwise, they are satisfied.
The bookstore owner knows a secret technique to remain not grumpy for minutes consecutive minutes, but this technique can only be used once.
Return the maximum number of customers that can be satisfied throughout the day.
Example 1:
Input: customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3
Output: 16
Explanation:
The bookstore owner keeps themselves not grumpy for the last 3 minutes.
The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16.*/

int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
{
    int notGrumpySum = 0;
    int n = grumpy.size();
    for (int i = 0; i < n; i++)
    {
        if (grumpy[i] == 0)
        {
            notGrumpySum += customers[i];
        }
    }

    int prevLossGrumpy = 0;
    for (int i = 0; i < minutes; i++)
    {
        if (grumpy[i] == 1)
            prevLossGrumpy += customers[i];
    }
    int maxiSum = prevLossGrumpy;
    int i = 1;
    int j = minutes;
    while (j < n)
    {
        if (grumpy[j] == 1)
        {
            prevLossGrumpy = prevLossGrumpy + customers[j];
        }
        if (grumpy[i - 1] == 1)
            prevLossGrumpy=prevLossGrumpy - customers[i - 1];
        maxiSum = max(maxiSum, prevLossGrumpy);
        i++;
        j++;
    }
    return notGrumpySum + maxiSum;
}
int main()
{
    vector<int> customers = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> grumpy = {0, 1, 0, 1, 0, 1, 0, 1};
    int ans=maxSatisfied(customers,grumpy,3);
    cout<<ans;

    return 0;
}