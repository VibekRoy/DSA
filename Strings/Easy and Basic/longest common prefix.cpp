#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> strs)
{
    string prefix = "";
    
    int j=0;
    while(j<strs[0].size())
    {
        char temp = strs[0][j];
        int count = 0;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i][j]==temp) count++;
            else break;
        }
        if(count == strs.size()) prefix += temp;
        else break;
        j++;
        
    }
    return prefix;

}

int main()
{
    cout<<longestCommonPrefix({"flower","flow","flight"});
    

    return 0;
}