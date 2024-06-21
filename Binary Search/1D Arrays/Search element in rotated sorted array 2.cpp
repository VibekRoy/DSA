#include <bits/stdc++.h>
using namespace std;

int search_element(vector<int> nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;

        if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            low++;
            high--;
            continue;
        }

        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target <= nums[mid])
                high = mid - 1;

            else
                low = mid + 1;
        }
        else
        {
            if (nums[high] >= target && target >= nums[mid])
                low = mid + 1;

            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    return 0;
}