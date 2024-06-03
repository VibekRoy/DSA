#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,6,5,8,11};
    int k = 14;

    map<int,int> hmap;
    vector<int> answer;
    for(int i=0;i<v.size();i++)
    {
        
        if(hmap.find(k-v[i]) != hmap.end())
        {
            answer.push_back(i);
            answer.push_back(hmap[k-v[i]]);
            break;
        }

        hmap[v[i]] = i;

    }

    for(auto it:answer){
    cout<<it<<" ";
    }

    return 0;
}