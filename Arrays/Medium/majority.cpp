#include <bits/stdc++.h>
using namespace std;
//moore voting algorithms

int main()
{
    vector<int> v = {2,2,1,1,1,2,2,1,1};
    int n = v.size();
    int votes = 0;
    int candidate = v[0];
    
    for(int i=0;i<n;i++)
    {
        if(v[i]==candidate)
        {
            votes++;
        }
        if(v[i]!=candidate)
        {
            votes--;

            if(votes == 0){
                candidate = v[i];
                votes = 1;
            }
        }
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==candidate) count++;
    }

    if(count>n/2) cout<<candidate;
    else cout<<-1;
    return 0;
}

