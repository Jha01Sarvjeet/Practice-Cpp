// to print subset of the string containing duplicate character
#include <iostream>

#include <string>
#include <vector>
using namespace std;
void sbstringDupl(string ans, string original, vector<string> &vec, bool flag)
{
    if (original == "")
    {
        vec.push_back(ans);
        return;
    }
    char ch = original[0];
    if (original.length() == 1)
    {
        if (flag == true)
            sbstringDupl(ans + ch, original.substr(1), vec, true);
        sbstringDupl(ans, original.substr(1), vec, true);
       return;
    }
    char dh = original[1];

    if (ch == dh)
    {
        if (flag == true)
            sbstringDupl(ans + ch, original.substr(1), vec, true);
        sbstringDupl(ans, original.substr(1), vec, false);
    }
    else
    {
        if(flag==true)sbstringDupl(ans + ch, original.substr(1), vec, true);
        sbstringDupl(ans, original.substr(1), vec, true);
    }
}
int main()
{
    string str = "aaab";
    vector<string> vec;
    sbstringDupl("", str, vec, true);
    for (auto i : vec)
        cout << i << " ";
        cout<<endl;
    cout<<"total number of subarray "<<vec.size()<<endl;
    return 0;
}