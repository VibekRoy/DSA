#include <bits/stdc++.h>
using namespace std;

int binary_search(int low,int high,int k, vector<int> v){

    if(low>high) return -1;

    int mid = (low+high)/2;

    if(v[mid] == k) return mid;

    else if(v[mid] < k) binary_search(mid+1,high,k,v);

    else binary_search(low,mid-1,k,v);   
    
}

//in case of overflow always take mid=(low+(high-low))/2;

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    cout<<binary_search(0,9,7,v);

    return 0;
}