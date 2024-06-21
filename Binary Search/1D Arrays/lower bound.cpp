#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> nums, int x)
{
    int n = nums.size() - 1;
    int ans = nums[n];
    int low = 0;
    int high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,5,6,7};

    cout<<lower_bound(nums,5)<<endl;
    

    return 0;
}