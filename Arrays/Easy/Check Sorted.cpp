#include <bits/stdc++.h>
using namespace std;

int main()
{   
    vector<int> v ={3,4,5,1,9};
    int count = 0;
    if(v[v.size()-1]>v[0]) count++;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
            count++;
    }

    if(count>=2) cout<<"false";

    else cout<<"true";
    
    


    return 0;
}