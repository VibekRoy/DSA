#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v1 = {1,2,3,4,5,6,7};
    vector <int> v2 = {5,6,7,8,9,10};

    vector<int> intersection;

    int m=v1.size();
    int n=v2.size();
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(v1[i] < v2[j]) i++;

        else if(v1[i] > v2[j]) j++;

        else {
            intersection.push_back(v1[i]);
            i++;
            j++;
        }
    }

    for(auto it:intersection){
    cout<<it<<" ";
    }
    return 0;
}