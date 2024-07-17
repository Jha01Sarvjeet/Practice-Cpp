// to print zig zag
/*
i/p         o/p
1           111
2            211121112
3           321112111232111211123*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printZIgZag(int n)
{
    if (n == 0)
        return;
    cout << n;
    printZIgZag(n - 1);
    cout << n;
    printZIgZag(n - 1);
    cout << n;
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    printZIgZag(n);

    return 0;
}