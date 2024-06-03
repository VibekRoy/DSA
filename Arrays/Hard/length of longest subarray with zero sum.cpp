#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {15 ,-2 ,2 ,-8 ,1 ,7 ,10 ,23};
    int maxi = 0;
    int sum = 0;
    map<int,int> hmap;
    for(int i=0;i<v.size();i++)
    {
        sum += v[i];
        if(sum==0) maxi = max(maxi,i+1);

        if(hmap.find(sum) != hmap.end())
        {
            maxi = max(maxi,i-hmap[sum]);
        }
        else hmap[sum] = i;
    }
    

    cout<<maxi;   

    return 0;
}