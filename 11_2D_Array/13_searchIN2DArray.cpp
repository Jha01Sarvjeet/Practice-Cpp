#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 2D array is sorted row wise and column wise and we have to search in that
int binarySearch(vector<int> nums, int target)
{
    int n = nums.size(); // size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return true;
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

// brute force approach
//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int m=matrix.size();
//      int n=matrix[0].size();
//      for(int i=0;i<m;i++){
//          for(int j=0;j<n;j++){
//              if(matrix[i][j]==target){
//                  return true;

//             }
//             else if(matrix[i][j]>target)
//                 break;
//         }
//     }
//     return false;
// }

// better using Binary search
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int m=matrix.size();
//      int n=matrix[0].size();
//      for(int i=0;i<m;i++){
//          bool flag=binarySearch(matrix[i],target);
//          if(flag==true){
//              return true;
//              break;
//          }

//     }
//     return false;
// }

// NOte :-  it willl work only if on flatten the matrix we get sorted  array
//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//      int n = matrix.size();
//      int m = matrix[0].size();

//     //apply binary search:
//     int low = 0, high = n * m - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         int row = mid / m, col = mid % m;
//         if (matrix[row][col] == target) return true;
//         else if (matrix[row][col] < target) low = mid + 1;
//         else high = mid - 1;
//     }
//     return false;
// }

// optimal Aprroach
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int i=0;//starting value of row
    int j=col-1;
    while(i<row && j>=0){
        if(matrix[i][j]==target){
            return true;
        }
        else if (matrix[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;



    
}

int main()
{
    vector<vector<int>> vec = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 19;
    cout << searchMatrix(vec, target) << endl;

    return 0;
}