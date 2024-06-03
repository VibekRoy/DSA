#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5,6,7,8,9};

    int n = v.size();

    int sum = n*(n+1)/2;

    int sum2 = 0;

    for(int i=0;i<n;i++) sum2 += v[i];

    cout<<sum-sum2;

    return 0;
}