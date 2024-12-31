#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*here are n flights that are labeled from 1 to n.

You are given an array of flight bookings bookings, where bookings[i] = [firsti, lasti, seatsi] represents a booking for flights firsti through lasti (inclusive) with seatsi seats reserved for each flight in the range.

Return an array answer of length n, where answer[i] is the total number of seats reserved for flight i.



Example 1:

Input: bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
Output: [10,55,45,25,25]
Explanation:
Flight labels:        1   2   3   4   5
Booking 1 reserved:  10  10
Booking 2 reserved:      20  20
Booking 3 reserved:      25  25  25  25
Total seats:         10  55  45  25  25
Hence, answer = [10,55,45,25,25]*/
vector<int> corpFlightBookings(vector<vector<int>> &bookings, int n)
{
    int bookingLen = bookings.size();
    vector<int>answer(n,0);
    for(int i=0;i<bookingLen;i++){
        vector<int>temp=bookings[i];
        for(int i=temp[0]-1;i<temp[1];i++){
            answer[i]=answer[i]+temp[2];
        }
    }
    return answer;
}
int main()
{
    vector<vector<int>> bookings={{1,2,10},{2,2,15},{2,5,25}};
    int n = 5;
    vector<int>answer=corpFlightBookings(bookings,n);
    for(auto i :answer){
        cout<<i<<" ";
    }
    cout<<endl;
}