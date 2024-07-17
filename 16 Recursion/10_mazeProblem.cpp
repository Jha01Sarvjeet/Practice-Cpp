// maze problem :- to reach from starting coordinyte to ending coordinate (only right and down moves
// are allowed)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//maze path with four input I:e  string coordinate and Destination coordinate
// int mazeNumberOfPaths(int sr, int sc, int er, int ec)
// {
//     if (sr > er || sc > ec)
//         return 0;
//     else if (sr == er && sc == ec)
//         return 1;
//     else
//     {
//         int rightMove = mazeNumberOfPaths(sr, sc + 1, er, ec);
//         int leftMove = mazeNumberOfPaths(sr + 1, sc, er, ec);
//         return rightMove + leftMove;
//     }
// }

//maze path with only two input I:e Destination coordinate

int mazeNumberOfPaths(int er, int ec)
{
    if (er<1 || ec<1)
        return 0;
    else if (er==1 && ec==1)
        return 1;
    else
    {
        int rightMove = mazeNumberOfPaths( er, ec-1);
        int leftMove = mazeNumberOfPaths(er-1, ec);
        return rightMove + leftMove;
    }
}
//maze path with four input I:e  string coordinate and Destination coordinate
// void printAllPath(int sr, int sc, int er, int ec,string s){
//      if (sr > er || sc > ec)
//         return ;
//     else if (sr == er && sc == ec)
//         cout<<s<<endl;
//     else
//     {
//         printAllPath(sr, sc + 1, er, ec,s+'R');
//         printAllPath(sr + 1, sc, er, ec,s+'D');
//         return ;
//     }
// }

//with only two input
void printAllPath(int er, int ec,string s){
     if (er<1 || ec<1)
        return ;
    else if (er==1 && ec==1)
        cout<<s<<endl;
    else
    {
        printAllPath( er, ec-1,s+"R");
        printAllPath(er-1, ec,s+"D");
        return ;
    }
}
int main()
{
    // cout << "number of ways to rech destination from starting point " << mazeNumberOfPaths(0, 0, 1, 1) << endl;
    // printAllPath(0,0,2,2,"");
    
    //  cout << "number of ways to rech destination from starting point " << mazeNumberOfPaths(5,5) << endl;
        printAllPath(3,3,"");
    return 0;
}