#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1, 1, 1, 1}, {1, 0, 1, 0}, {1, 1, 1, 1}};

    int col0 = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {

            if (arr[i][j] == 0)
            {
                arr[i][0] = 0;
                if (j!=0)
                {
                    arr[0][j] = 0;
                }
                else
                col0 = 0;
                
            }
        }
    }
    for (auto it : arr)
    {
        for (auto itr : it)
        {
            cout << itr << " ";
        }
        cout << endl;
    }

    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = 1; j < arr[0].size(); j++)
        {
            if (arr[0][j] == 0 || arr[i][0] == 0)
            {
                arr[i][j] = 0;
            }
        }
    }

    if(arr[0][0]==0){
        for(int j=0;j<arr[0].size();j++)
        {
            arr[0][j]=0;
        }
    }

    if(col0==0){
        for(int j=0;j<arr.size();j++)
        {
            arr[j][0]=0;
        }
    }

    for (auto it : arr)
    {
        for (auto itr : it)
        {
            cout << itr << " ";
        }
        cout << endl;
    }

    return 0;
}