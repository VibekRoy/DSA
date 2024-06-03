#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 7;
    vector<int> arr = {7,1,6,0};
    int left=0,right=0;
    int N = arr.size();
    int sum = arr[0];
    int maxCount = 0;
    
    while(right < N)
    {
        while(sum>k && left <=right)
        {
            sum -= arr[left];
            left++;
        }
        if(sum == k) maxCount = max(maxCount,right - left + 1);


        right++;
        if(right < N) sum += arr[right];
    }


    cout<<maxCount;
    return 0;
}