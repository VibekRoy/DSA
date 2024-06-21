#include <bits/stdc++.h>
using namespace std;

int minimum_element(vector<int> nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int mini = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[low] <= nums[high])
        {
            mini = min(mini, nums[low]);
            break;
        }

        if (nums[mid] >= nums[low])
        {
            mini = min(mini, nums[low]);
            low = mid + 1;
        }
        else
        {
            mini = min(mini, nums[mid]);
            high = mid - 1;
        }
    }
    return mini;
}

int main()
{

    return 0;
}