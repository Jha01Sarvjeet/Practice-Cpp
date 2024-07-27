/*The set [1, 2, 3, ..., n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence
 for n = 3:  "213"

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.

 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i=2;i<=n;i++){
        ans*=i;
    }
    return ans;
}
string permutaionSequence(string ans, string original,int k)
{  int n=original.length();
    if (n == 1)
    {
        ans+=original;
        return ans;
    }
    else{
      
        int fact=factorial(n-1);
        int idx=k/fact;
        if(k%fact==0)idx--;
        int q=fact;
        char ch=original[idx];
        string left=original.substr(0,idx);
        string right=original.substr(idx+1);
        if(k%fact==0)return permutaionSequence(ans+ch, left+right,fact);
        else{
            return permutaionSequence(ans+ch, left+right,k-fact*idx);
        }
    
}}
int main()
{

    string ans=permutaionSequence("","1234",11);
    cout<<ans;

    return 0;
}