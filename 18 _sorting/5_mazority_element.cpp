/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times.
 You may assume that the majority element always exists in the array.

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 */
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int num[]={2,2,1,1,1,2,2};
int n=sizeof(num)/sizeof(num[0]);
//sort the element and return the mid+1 th element
sort(num,num+n);

int mid=n/2;
cout<<"mazority element in array is " <<num[mid+1]<<endl;
}