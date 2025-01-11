#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*in the given array all elements occurs twice except two element find that two element*/
void unique2Number(vector<int> arr)
{
    int xorelement = 0;
    for (auto i : arr)
        xorelement ^= i;
    int temp = xorelement;
    int k = 0;
    while (true)
    {
        if (temp & 1 == 1)
            break;
        k++;
        temp>>=1;
    }
   
    int result = 0;
    for(auto i : arr)
    {
        if ((i >> k) & 1 == 1)
        {
            result ^= i;
        }
    }
    cout<<result<<" ";
    cout<<(xorelement^result)<<endl;
    return;

}
int main()
{
    vector<int>arr={1,2,1,4,3,2};
    unique2Number(arr);

}