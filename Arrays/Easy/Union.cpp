#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {2,3,4,4,5,7,8};
    //output should be 1 2 3 4 5 7 8
    vector<int> unionArr;

    int m = v1.size();
    int n = v2.size();
    int j=0,i=0;
    while(i<m && j<n)
    {
        if(v1[i] <= v2[j])
        {
            if(unionArr.size()==0 || unionArr.back()!=v1[i])
            {
                unionArr.push_back(v1[i]);
                
            }
            i++;
        }
        else
        {
            if(unionArr.size()==0 || unionArr.back()!=v2[j])
            {
                unionArr.push_back(v2[j]);
            }
            j++;
        }
    }    

    while(i<m)
    {
        if(unionArr.size()==0 || unionArr.back()!=v1[i])
            {
                unionArr.push_back(v1[i]);
                
            }
            i++;
    }

    while(j<n)
    {
        if(unionArr.size()==0 || unionArr.back()!=v2[j])
            {
                unionArr.push_back(v2[j]);
            }
            j++;
    }

    for(auto it:unionArr){
    cout<<it<<" ";
    }
    return 0;
}