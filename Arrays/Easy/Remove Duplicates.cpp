#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,1,2,2,2,3,3};

    int j=0;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]!=v[i-1])
        {
            v[++j]=v[i];
        }
    }

    for(auto it:v)
    {
        cout<<it<<" ";
    }

    return 0;
}