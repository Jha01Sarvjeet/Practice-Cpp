    //Input a string and return the number of substrings that contain only vowels.
    #include<iostream>
    #include <bits/stdc++.h> 
    using namespace std;
    //naive approach
    bool isvowel(char c){
            if (c == 'a' || c == 'e' || c == 'i' ||c == 'o' || c == 'u' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                return true;
            }
            return false;
    }
    bool isValid(string str){
        for(int i=0;i<str.length();i++){
            if(!isvowel(str[i]))
                return false;
            
        }
        return true;
    }
    int main(){
        string str;
        int count=0;
        cout<<"enter string"<<endl;
        cin>>str;
        for(int i=0;i<str.length();i++){
            string temp="";
            for(int j=i;j<str.length();j++){

                temp+=str[j];
                if(isValid(temp)){
                count++;
            }
            
        }
        


    }
    cout<<"total count of substring that contains only vowels "<<count<<endl;}