#include <bits/stdc++.h>
using namespace std;

int  count_occurence(vector<int> nums,int k){
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

    if(first == -1 ) return 0;

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

    return last - first + 1;


}


int main()
{

    vector<int> nums = {2,4,6,8,8,8,11,13};
    
    cout<<count_occurence(nums,12);
    

    return 0;
}