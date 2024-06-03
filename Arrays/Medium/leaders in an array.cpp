#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,22,12,3,0,6};

    int maxi = v[v.size()-1];

    vector<int> leaders = {v[v.size()-1]};

    for(int i=v.size()-2;i>=0;i--)
    {
        if(v[i]>maxi) leaders.push_back(v[i]);

        maxi = max(maxi,v[i]);
    }


    for(auto it:leaders){
    cout<<it<<" ";
    }


    return 0;
}