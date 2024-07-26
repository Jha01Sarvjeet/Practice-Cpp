/*We build a table of n rows (1-indexed). We start by writing 0 in the 1st row.
 Now in every subsequent row, we look at the previous row and replace each occurrence of 0
  with 01, and each occurrence of 1 with 10.

For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int kthGrammar(int n, int k)
{
    if (n == 1)
        return 0;
    else
    {
        if (k % 2 == 0)
        {
            int temp = kthGrammar(n - 1, k / 2);
            if (temp == 1)return 0;
            else return 1;
        }
        else
        {
            return kthGrammar(n - 1, (k + 1) / 2);
        }
    }
}
int main()
{
    int n, k;
    cout << "enter n & k" << endl;
    cin >> n;
    cin >> k;
    int ans = kthGrammar(n, k);
    cout << "value at nth row and kth position is " << ans << endl;

    return 0;
}