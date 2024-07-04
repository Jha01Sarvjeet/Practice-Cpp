// to display the caharacter ocuuring most of the times
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
     string str;
     cout << "enter  string" << endl;
     cin >> str;
     int n = str.length();
     int max = 0;
//Brute force approach

     // char ch;
     // for (int i = 0; i < n; i++)
     // {
     //      int count = 1;
     //      for (int j = i + 1; j < n; j++)
     //      {
     //           if (str[j] == str[i])
     //           {
     //                count++;
     //           }
     //      }
     //      if (count > max)
     //      {
     //           max = count;
     //           ch=str[i];
     //      }
     // }
     // for (int i = 0; i < n; i++)
     // {
     //      int count = 1;
     //      for (int j = i + 1; j < n; j++)
     //      {
     //           if (str[j] == str[i])
     //           {
     //                count++;
     //           }
     //      }
     //      if (count == max)
     //      {
     //           cout<<"character having maximum count := "<<str[i]<<" and having count "<<count<<endl;
     //      }
     // }
     
//Better approach
vector<int>track(26,0);
for (int i=0;i<n;i++){
     int ascii=str[i]-'a';
     track[ascii]++;
}

for(int i=0;i<26;i++){
     if(track[i]>max){
          max=track[i];
     }
}
for(int i=0;i<26;i++){
     if(track[i]==max){
          int ascii=i+97;
          char ch=char(ascii);
            cout<<"character having maximum count := "<<ch<<" and having count "<<max<<endl;
     }
}

     return 0;
}
