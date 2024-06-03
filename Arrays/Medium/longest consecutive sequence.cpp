#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {9,1,4,7,3,-1,0,5,8,-1,6};

    sort(v.begin(), v.end());
    for(auto it:v){
    cout<<it<<" ";
    }
    int count = 0;
    int longest = 1;
    int last_smaller = INT_MIN;
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i]-1 == last_smaller){
            count++;
            last_smaller = v[i];
        }
        else if(v[i]!=last_smaller)
        {
            count=1;
            last_smaller = v[i];
        }


        longest = max(longest,count);
    }

    cout<<longest<<endl;
    return 0;
}