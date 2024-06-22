#include <bits/stdc++.h>
using namespace std;

pair<int,int> max_min(vector<int> bloomDay)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(auto it:bloomDay)
    {
        if(it>maxi) maxi = max(maxi,it);
        if(it<mini) mini = min(mini,it);
    }
    return {maxi,mini};
}

bool possible(vector<int>bloomDay,int m,int k,int mid)
{
    int count = 0;
    int noOfB = 0;
    for(int i=0;i<bloomDay.size();i++)
    {
        if(bloomDay[i] <= mid)
        {
            count++;
           
        }
        else
        {
            noOfB += count/k;
            count=0;
        }
    }

    noOfB += count/k;
    cout<<"No of B:"<<noOfB<<endl;
    cout<<"Count: "<<count<<endl;
    if(noOfB >= m) return true;

    return false;
}



int minDays(vector<int> bloomDay, int m, int k)
{
    if(bloomDay.size() < m*k) return -1;
    pair<int,int> maxMin = max_min(bloomDay);
    int low = maxMin.second;
    int high = maxMin.first;

    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(possible(bloomDay,m,k,mid)) 
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;

}

int main()
{

    cout<<minDays({7,7,7,7,12,7,7},2,3)<<endl;

    return 0;
}