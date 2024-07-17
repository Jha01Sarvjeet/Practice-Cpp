// Pre in Post VVVi
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void pip(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << "pre " << n << endl;
        pip(n - 1);
        cout << "IN " << n << endl;
        pip(n - 1);
        cout << "Post " << n << endl;
    }
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin>>n;
    pip(n);

    return 0;
}