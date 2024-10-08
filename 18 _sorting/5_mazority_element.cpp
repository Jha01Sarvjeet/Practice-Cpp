/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times.
 You may assume that the majority element always exists in the array.

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int num[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(num) / sizeof(num[0]);
    // sort the element and return the mid+1 th element
    // better approach
    //  sort(num,num+n);

    // int mid=n/2;
    // cout<<"mazority element in array is " <<num[mid+1]<<endl;

    // optimal approach(Boyer-Moore Majority Voting Algorithm)
    int vote = 0;
    int element;
    for (int i = 0; i < n; i++)
    {
        if (vote == 0)
        {
            vote = 1;
            element = num[i];
        }
        else if (num[i] == element)
        {
            vote++;
        }
        else{
            vote--;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(element==num[i])count++;
    }
    if(count>n/2){
        cout<<"mazority element "<<element<<endl;
    }
    else{
        cout<<"no mazority element"<<endl;
    }
}