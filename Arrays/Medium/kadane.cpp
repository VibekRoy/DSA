#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    int sum = 0;
    int maxi = INT_MIN;
    int start = 0;
    int end = 0;
    for(int i=0;i<v.size();i++)
    {
        sum+= v[i];
        if(sum>maxi)
        { 
            maxi = sum;
            end = i;        
        }
        if(sum < 0) 
        {
            sum = 0;
            start = i+1;
        }
    }

    cout<<maxi<<endl;

    for(int i=start;i<=end;i++)
    {
        cout<<v[i]<<" ";
    }

    //if empty subarray is considered then for maxi < 0 output will be 0 because 0 is greater than negative maxi.
    return 0;
}