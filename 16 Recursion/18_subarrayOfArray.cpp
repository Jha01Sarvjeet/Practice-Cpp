// to print the subarray of array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void display(vector<int> vec)
{
    cout << '{' << " ";
    for (auto i : vec)
        cout << i << " ";
    cout << "}" << endl;
}
void subarray(vector<int> temp, vector<int> vec, int idx)
{
    if (idx == vec.size())
    {
        display(temp);
        return;
    }
    subarray(temp,vec,idx+1);
    temp.push_back(vec[idx]);
    subarray(temp,vec,idx+1);
    
}
int main()
{
vector<int>vec={1,2,3};
subarray({},vec,0);

    return 0;
}