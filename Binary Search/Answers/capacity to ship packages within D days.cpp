#include <bits/stdc++.h>
using namespace std;

int check_capacity(vector<int> weights,int mid)
{
    int sum = 0;
    int days = 1;
    for(int i=0;i<weights.size();i++)
    {
        sum+=weights[i];
        if(sum>mid)
        {
            days++;
            sum=weights[i];
        }
    }
    
    return days;
}

int ship_capacity(vector<int> weights, int d)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    while(low<=high)
    {
        int mid = low + (high - low)/2;
        int days = check_capacity(weights,mid);
        if(days <= d) high = mid-1;
        else low = mid + 1;


    }
    return low;
}

int findDays(vector<int> &weights, int cap) {
    int days = 1; //First day.
    int load = 0;
    int n = weights.size(); //size of array.
    for (int i = 0; i < n; i++) {
        if (load + weights[i] > cap) {
            days += 1; //move to next day
            load = weights[i]; //load the weight.
        }
        else {
            //load the weight on the same day.
            load += weights[i];
        }
    }
    return days;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    cout<<check_capacity(nums,15)<<endl;
    cout<<findDays(nums,15);
    return 0;
}