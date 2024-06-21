#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> v,int k){
    int low = v[0];
    int high = v[v.size()-1];
    while(low <= high){
        int mid = (low + high)/2;

        if(v[mid]==k) return mid;

        else if(v[mid]>k) high = mid-1;

        else low = mid+1;
    }
    return -1;
}


int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    cout<<binary_search(v,8);
    

    return 0;
}