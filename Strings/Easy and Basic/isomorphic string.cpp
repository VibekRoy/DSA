#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> hmap_s;
    unordered_map<char, char> hmap_t;
    for (int i = 0; i < s.size(); i++)
    {
        if ((hmap_s.find(s[i]) != hmap_s.end() && hmap_s[s[i]] != t[i]) || (hmap_t.find(t[i]) != hmap_t.end() && hmap_t[t[i]] != s[i]))
        {
            return false;
        }
        hmap_s[s[i]] = t[i];
        hmap_t[t[i]] = s[i];
    }
    return true;
}

int main()
{

    return 0;
}
