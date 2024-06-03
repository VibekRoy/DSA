#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {2,1,5,4,3,0,0};

    vector<vector<int>> perm;

    int bk=-1;
    for(int i=v.size()-2;i>=0;i--) if(v[i]<v[i+1]) bk = i;

    if(bk==-1) reverse(v.begin(),v.end());

    int sm;
    for(int i=bk;i<v.size()-1;i++)
    {
        if(v[i]<v[i+1] && v[i]>v[bk]) sm=v[i];
    }

    cout<<bk<<endl<<sm<<endl;

     
    for(auto it:v){
    cout<<it<<" ";
    }
    

    return 0;
}