#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5};
    int largest=v[0];
    int second_largest = INT_MIN;

    for(int i=1;i<v.size();i++)
    {
        if(v[i]>largest) 
        {
            second_largest = largest;
            largest = v[i];
        }

        if(v[i]>second_largest && v[i]!=largest)
            second_largest = v[i];
    }

    cout<<"Largest: "<<largest<<endl<<"Second Largest: "<<second_largest;

    return 0;
}