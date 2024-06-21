#include <bits/stdc++.h>
using namespace std;

pair<int,int> first_and_last_occurence(vector<int> nums,int k){
    int first = -1;
    int low = 0;
    int high = nums.size()-1;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(nums[mid]==k) {
            first = mid;
            high = mid -1;
        }
        else if(nums[mid] < k) low = mid + 1;

        else high = mid -1 ; 
    }

    if(first == -1 ) return {-1,-1};

    low = 0, high = nums.size() - 1;
    int last = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] == k){
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < k) low = mid + 1;
        else high = mid - 1;
    }

    return {first,last};


}


int main()
{

    vector<int> nums = {2,4,6,8,8,8,11,13};
    pair<int,int> ans = first_and_last_occurence(nums,8);
    cout<<ans.first<<endl<<ans.second;
    

    return 0;
}