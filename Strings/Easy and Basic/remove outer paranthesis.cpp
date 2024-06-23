#include <bits/stdc++.h>
using namespace std;

string removeOuterParenthesis(string s)
{
    int count = 0;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '(')
        {
            if (count > 0)
                ans.push_back(s[i]);
            count++;
        }
        else
        {
            count--;
            if (count > 0)
                ans.push_back(s[i]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}