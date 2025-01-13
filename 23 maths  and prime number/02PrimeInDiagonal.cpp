/*Return the largest prime number that lies on at least one of the diagonals of nums. In case,
 no prime is present on any of the diagonals, return 0.*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool primeOrNot(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int maxDiagPrime(vector<vector<int>> &nums)
{
    int n = nums.size();
    int maxPrime = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (primeOrNot(nums[i][i]))
        {
            maxPrime = max(nums[i][i], maxPrime);
        }
        if(primeOrNot(nums[i][n-i-1])){
            maxPrime = max(nums[i][n-i-1], maxPrime);
        }
    }
    if(maxPrime==INT_MIN)return 0;
    else return maxPrime;
}
int main()
{
    vector<vector<int>>nums = {{1,2,3},{5,17,7},{9,11,10}};
    int largestPrime=maxDiagPrime(nums);
    cout<<"largest prime "<<largestPrime<<endl;
}