#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,5,1,3,0,6,6};
    int largest = v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>largest) largest = v[i];

    }
    cout<<largest;

    return 0;
}