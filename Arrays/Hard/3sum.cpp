#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> three_sum_better(vector<int> v)
{
    set<vector<int>> st;

    for (int i = 0; i < v.size(); i++)
    {
        set<int> hashSet;
        for (int j = i + 1; j < v.size(); j++)
        {

            int third_element = 0 - v[i] - v[j];
            if (hashSet.find(third_element) != hashSet.end())
            {
                vector<int> temp = {v[i], v[j], third_element};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashSet.insert(v[j]);
        }
    }

    vector<vector<int>> res(st.begin(), st.end());
    return res;
}

vector<vector<int>> three_sum_optimal(vector<int> v)
{
    vector<vector<int>> ans;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0 && v[i] == v[i - 1])
            continue;

        int j = i + 1;
        int k = v.size() - 1;
        while (j < k)
        {
            int sum = v[i] + v[j] + v[k];

            if (sum < 0)
                j++;
            else if (sum > 0)
                k--;
            else
            {
                ans.push_back({v[i], v[j], v[k]});
                j++, k--;
                while(j<k && v[j] == v[j-1]) j++;
                while(j<k && v[k] == v[k+1]) k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {-1, 0, 1, 2, -1, -4};

    // using set data structure this is the better approach
    for (auto it : three_sum_better(v))
    {
        for (auto itr : it)
        {
            cout << itr << " ";
        }
        cout << endl;
    }

    // optimal approach
    for (auto it : three_sum_optimal(v))
    {
        for (auto itr : it)
        {
            cout << itr << " ";
        }
        cout << endl;
    }

    return 0;
}