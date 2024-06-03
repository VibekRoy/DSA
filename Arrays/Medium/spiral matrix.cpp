#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    vector<int> ans;

    int top=0,bottom=matrix.size()-1;
    int left=0,right=matrix[0].size()-1;

    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
    {
        ans.push_back(matrix[top][i]);
    }
    top++;

    for(int i=top;i<=bottom;i++)
    {
        ans.push_back(matrix[i][right]);
    }
    right--;

    for(int i=right;i>=left;i--)
    {
        ans.push_back(matrix[bottom][i]);
    }
    bottom--;

    for(int i=bottom;i>=top;i--)
    {
        ans.push_back(matrix[i][left]);
    }
    left++;
    }
    

    for(auto it:matrix)
    {
        for(auto itr:it)
        {
            if(itr>=10) cout<<itr<<"  ";
            else cout<<itr<<"   ";
        }
        cout<<endl;
    }

    for(auto it:ans){
    cout<<it<<" ";
    }

    return 0;
}