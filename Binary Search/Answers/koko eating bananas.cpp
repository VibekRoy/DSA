#include <bits/stdc++.h>
using namespace std;

int maximum_element(vector<int> nums)
{
    int ans=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>ans){
            ans = nums[i];
        }
    }
    return ans;
}

long long calculateHours(vector<int> piles,int mid)
{
    long long hours = 0;
    for(auto it:piles)
    {
        hours += ceil((double)it/(double)mid);
    }
    return hours;
}

int minEatingSpeed(vector<int> piles, int h)
{
    int low = 1;
    int high = maximum_element(piles);
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(calculateHours(piles,mid)<=h)
        {
            high = mid-1;
        } 
        else low = mid + 1;
    }
    return low;
}

int main()
{
    cout<<minEatingSpeed({805306368,805306368,805306368},1000000000);

    return 0;
}
