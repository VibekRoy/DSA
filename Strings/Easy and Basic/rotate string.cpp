#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{
    if (s == goal)
        return true;
    if (s.size() != goal.size())
        return false;

    string con = goal + goal;
    if (con.find(s) != string::npos)
        return true;
    return false;
}

int main()
{
    cout << rotateString("bbbacddceeb", "ceebbbbacdd");

    return 0;
}