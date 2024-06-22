#include <bits/stdc++.h>
using namespace std;

int maxi(vector<int> nums)
{
    int maxi = INT_MIN;
    for(auto it:nums) maxi = max(maxi,it);
    return maxi;
}

bool division(vector<int> nums,int limit, int mid)
{
    long long sum = 0;
    for(int i=0;i<nums.size();i++)
    {
        sum += ceil((double)nums[i]/(double)mid);
    }
    
    return sum<=limit;
}

int smallest_divisor(vector<int> nums,int limit)
{
    int low = 1;
    int high = maxi(nums);

    while(low<=high)
    {
        int mid = low + (high - low )/2;

        if(division(nums,limit,mid)) high = mid - 1;
        else low = mid + 1;
        
    }

    return low;

}


int main()
{
    

    return 0;
}