#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,1,0,1,1,1,0,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,1,0,1,0};

    int maxCount = 0;

    int count = 0;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=0)
        {
            count++;
            maxCount = max(maxCount,count);

        }
        else
        {
            count = 0;
        }
    }

    cout<<maxCount;

    return 0;
}