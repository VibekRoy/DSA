#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    unordered_map<char, int> hmap;
    for (auto it : s)
        hmap[it]++;

    vector<pair<int, char>> v;
    for (auto it : hmap)
        v.push_back({it.second, it.first});

    sort(v.begin(), v.end());

    string ans;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        int freq = v[i].first;
        string freq_temp;
        while (freq != 0)
        {
            freq_temp += v[i].second;
            freq--;
        }
        ans += freq_temp;
    }
    return ans;
}

int main()
{
    cout << frequencySort("Aabb");
    return 0;
}