#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,0,2,1,1,0};
    int low=0,mid=0,high=v.size()-1;
    

    while(mid<=high)
    {
        if(v[mid] == 0) swap(v[low++],v[mid++]);
        
        if(v[mid] == 1) mid++;

        if(v[mid] == 2) swap(v[high--],v[mid]);
    }


    for(auto it:v){
    cout<<it<<" ";
    }
    
    return 0;
}