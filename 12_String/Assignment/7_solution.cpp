// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string str;
cout<<"enter string"<<endl;
cin>>str;
int flarge=INT_MIN;
int slarge=INT_MIN;
for (int i=0;i<str.length();i++){
    if((str[i]-'0')>flarge){
            slarge=flarge;
            flarge=str[i]-'0';
        
    }
    else if((str[i]-'0')<flarge && (str[i]-'0')>slarge){
        slarge=(int)str[i]-'0';
    }
}
cout<<" Second largest"<<slarge<<endl;
    
     return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
int main() {
string p;
cin >> p;
char f = '?', s = '?';
for (auto &i : p) {
if (f == '?' || i > f) {
s = f;
f = i;
} else if (i > s) {
s = i;
}
}
cout << s;
}*/