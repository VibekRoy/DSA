#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;
    if (s == t)
        return true;
    vector<int> arr(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a']++;
        arr[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    cout << isAnagram("aa", "bb");

    return 0;
}