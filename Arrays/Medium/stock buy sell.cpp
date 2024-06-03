#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {7,1,5,3,4,6};

    int buy = INT_MAX;
    int profit = 0;
    
    for(int i=0;i<v.size();i++)
    {
        if(buy>v[i]) buy = v[i];

        int sell = v[i] - buy;

        profit = max(profit,sell);
    }


    cout<<profit;


    return 0;
}