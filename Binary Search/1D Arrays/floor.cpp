#include <bits/stdc++.h>
using namespace std;

int floor(vector<int> nums , int k)
{
    int n = nums.size();
    int ans = -1;
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(nums[mid] <= k){
            ans = nums[mid];
            low = mid+1;
        }
        else high = mid - 1;

    }
    return ans;
}


int main()
{

    vector<int> nums = {1,2,3,4,5,5,6,7};

    cout<<floor(nums,5)<<endl;
    

    return 0;
}