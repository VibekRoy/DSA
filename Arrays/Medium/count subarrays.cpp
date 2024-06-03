#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3};
    int k=3;

    int count = 0;
    int sum = 0;

    map<int,int> hmap;
    

    for(int i=0;i<v.size();i++)
    {
        sum += v[i];

        if(sum == k) count++;

        if(hmap.find(sum-k) != hmap.end()) 
        {
            count+=hmap[sum-k];
        }   

        hmap[sum]++;
    }


    cout<<count;

    return 0;
}