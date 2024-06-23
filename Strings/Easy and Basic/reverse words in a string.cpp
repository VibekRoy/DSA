#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string ans;
    vector<string> rev;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            if (i == 0)
                rev.push_back("");
            rev.back() += s[i];
        }
        else
        {
            rev.push_back("");
        }
    }

    for (int i = rev.size() - 1; i >= 0; i--)
    {
        if (rev[i] != "")
        {
            if (ans.size() == 0)
                ans += rev[i];
            else
                ans += ' ' + rev[i];
        }
    }
    return ans;
}

int main()
{
    cout << reverseWords("  bob  allice  ");

    return 0;
}