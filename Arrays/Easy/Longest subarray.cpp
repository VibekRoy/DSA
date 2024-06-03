#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 15;
    vector<int> arr = {-13 ,0 ,6 ,15 ,16 ,2 ,15 ,-12 ,17 ,-16 ,0 ,-3 ,19 ,-3 ,2 ,-9, -6};
    map<int,int> hmap;
    int maxCount = 0;
    int sum = 0;
    for(int i=0;i<arr.size();i++)
    {
        sum += arr[i];
        
        if(sum == k){
            maxCount = max(maxCount,i+1);
        }

        int z = sum - k;
        if(hmap.find(z) != hmap.end())
        {
            maxCount = max(maxCount,i-hmap[z]);
        }

        if(hmap.find(sum) == hmap.end())
        hmap[sum] = i;

        
    }

    cout<<maxCount;


    

    return 0;
}