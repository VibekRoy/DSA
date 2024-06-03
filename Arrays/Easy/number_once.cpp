#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,2,1,1,4,5,4,3,3,5,5};

    int num = 0;
    for(int i=0;i<v.size();i++)
    {
        num ^= v[i];
    }

    cout<<num;

    return 0;
}