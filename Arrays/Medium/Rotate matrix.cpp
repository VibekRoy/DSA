#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }


    for(int i=0;i<arr.size();i++)
    {
        reverse(arr[i].begin(),arr[i].end());
    }

    for(auto it:arr)
    {
        for(auto itr:it)
        {
            cout<<itr<<" ";
        }
        cout<<endl;
    }

    return 0;
}