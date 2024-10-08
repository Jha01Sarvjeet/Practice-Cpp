/*eg:-,
input=[19,12,23,8,16]
output=3,1,4,0,2
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int num[] = {19, 12, 23, 8, 16};
    int n = sizeof(num) / sizeof(num[0]);
    vector<int> track(n, 0);
    int x=0;
    for (int i = 0; i < n; i++)
    {
        int mini = INT_MAX;
        int minIndx = -1;
        for (int j = 0; j < n; j++)
        {
            if (track[j] == 1)
                continue;
            if (num[j] < mini)
            {
                mini = num[j];
                minIndx=j;
            }
        }
        num[minIndx]=x;
        x++;
        track[minIndx]=1;//update track
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";

    }
    cout<<endl;
}
