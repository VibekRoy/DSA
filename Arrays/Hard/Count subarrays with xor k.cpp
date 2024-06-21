#include <bits/stdc++.h>
using namespace std;

int subarrays(vector<int> &nums,int target)
{
    int count = 0;
    map<int,int> hmap;
    int n=nums.size();
    int xorr = 0;
    hmap[xorr]++;
    for(int i=0;i<n;i++)
    {
        xorr^=nums[i];
        
        count += hmap[xorr^target];

        hmap[xorr]++;
    }

    return count;
}


int main()
{
    vector<int> v = {4,2,2,6,4};
    int k = 6;
    cout<<subarrays(v,k);


    return 0;
}