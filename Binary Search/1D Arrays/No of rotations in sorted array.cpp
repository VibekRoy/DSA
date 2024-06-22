#include <bits/stdc++.h>
using namespace std;

int rotations(vector<int> nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int mini = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[low] <= nums[high])
        {
            if (nums[low] < mini)
            {
                mini = min(mini, nums[low]);
                index = low;
            }
            break;
        }

        if (nums[mid] >= nums[low])
        {
            if (nums[low] < mini)
            {
                mini = min(mini, nums[low]);
                index = low;
            }
            low = mid + 1;
        }
        else
        {
            if (nums[mid] < mini)
            {
                mini = min(mini, nums[mid]);
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
}

int main()
{

    return 0;
}