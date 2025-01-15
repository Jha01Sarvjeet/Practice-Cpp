/*Given an array of positive integers nums, return the number of distinct prime factors in the product of the
 elements of nums.
Input: nums = [2,4,3,7,10,6]
Output: 4
Explanation:
The product of all the elements in nums is: 2 * 4 * 3 * 7 * 10 * 6 = 10080 = 25 * 32 * 5 * 7.
There are 4 distinct prime factors so we return 4.*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void sieveFillig(vector<int> &sieve)
{
    int n = sieve.size();

    // upating sieve
    for (int i = 2; i <sqrt(n); i++)
    {
        int j = i + i;
        while (j < n)
        {
            sieve[j] = 0;
            j = j + i;
        }
    }
    //  for(auto i :sieve)cout<<i<< " ";
    // cout<<endl;
}
int distinctPrimeFactors(vector<int> &nums)
{
    int maxi = -1;
    for (auto i : nums)
    {
        maxi = max(maxi, i);
    }
    vector<int> sieve(maxi+1, 1);
    if (maxi + 1 > 0)
        sieve[0] = 0;
    if (maxi + 1 > 1)
        sieve[1] = 0;
    sieveFillig(sieve);
    vector<int> primes;
    for (int i = 2; i <= maxi; i++)
    {
        if (sieve[i] == 1)
        {
            primes.push_back(i);
        }
    }
    //  for(auto i :primes)cout<<i<< " ";
    // cout<<endl;
    vector<int> taken(primes.size(), 0);

    for (int i = 0; i < nums.size(); i++)
    {

        for (int j = 0; j < primes.size(); j++)
        {
            if (primes[j] > nums[i])
                break;
            if (nums[i] % primes[j] == 0)
                taken[j] = 1;
        }
    }
    //  for(auto i :taken)cout<<i<< " ";
    // cout<<endl;
    int count = 0;
    for (auto i : taken)
        if(i==1)
        count++;
    return count;
}
int main()
{
    vector<int> nums = {2,4,3,7,10,6};
    // for(auto i :nums)cout<<i<< " ";
    cout<<endl;
    int counti = distinctPrimeFactors(nums);
    cout << counti << endl;
}