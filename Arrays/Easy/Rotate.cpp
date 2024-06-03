#include <bits/stdc++.h>
using namespace std;

void left_rotate(vector<int> & v,int k){
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    reverse(v.begin(),v.end());

}

void right_rotate(vector<int> & v, int k){
    reverse(v.begin(),v.end()-k);
    reverse(v.end()-k,v.end());
    reverse(v.begin(),v.end());
}


int main()
{
    vector<int> v = {1,2,3,4,5,6,7};

    left_rotate(v,4);
    for(auto it:v)
    {
        cout<<it<<" ";
    }

    cout<<endl;
    vector<int> v1 = {1,2,3,4,5,6,7};
    right_rotate(v1,4);
    for(auto it:v1)
    {
        cout<<it<<" ";
    }






    return 0;
}