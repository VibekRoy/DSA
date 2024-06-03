#include <bits/stdc++.h>
using namespace std;

void zero(int i, int j, vector<vector<int>> &arr)
{
    for (int k = 0; k < arr.size(); k++)
    {
        if (arr[k][j] != 0)
            arr[k][j] = -1;
    }

    for (int k = 0; k < arr[0].size(); k++)
    {
        if (arr[i][k] != 0)
            arr[i][k] = -1;
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 1, 1, 1}, {1, 0, 1, 0}, {1, 1, 1, 1}};
    vector<int> row(arr.size(), 0);
    vector<int> col(arr[0].size(), 0);

    cout << "Initial Matrix\n";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (row[i]==1 || col[j]==1)
                arr[i][j] = 0;
        }
    }
    cout << "\nFinal Matrix\n";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}