#include <bits/stdc++.h>
using namespace std;

vector<int> hmap(vector<int> v)
{
    map<int, int> hmap;
    vector<int> ans;
    int least_occ = v.size() / 3 + 1;
    for (int i = 0; i < v.size(); i++)
    {
        hmap[v[i]]++;

        if (hmap[v[i]] == least_occ)
            ans.push_back(v[i]);

        if (ans.size() == 2)
            break;
    }
    return ans;
}

int main()
{
    vector<int> v = {11, 33, 11, 33, 11, 33};

    // hashmap method
    vector<int> ans = hmap(v);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    // extended moore's voting algo
    int cnt1 = 0, cnt2 = 0, el1, el2;

    for (auto it : v)
    {
        if (it != el2 && cnt1 == 0)
        {
            cnt1 = 1;
            el1 = it;
        }

        else if (it != el1 && cnt2 == 0)
        {
            cnt2 = 1;
            el2 = it;
        }

        else if (el1 == it)
            cnt1++;

        else if (el2 == it)
            cnt2++;

        else
        {
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = 0, cnt2 = 0;
    for (auto it : v)
    {
        if(el1==it) cnt1++;
        if(el2==it) cnt2++;
    }

    int least_occ = v.size()/3+1;
    vector<int> ls;
    if(cnt1>=least_occ) ls.push_back(el1);
    if(cnt2>=least_occ) ls.push_back(el2);


    for(auto it:ls){
    cout<<it<<" ";
    }

    return 0;
}