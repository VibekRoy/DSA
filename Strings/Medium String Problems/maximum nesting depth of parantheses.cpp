#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int count = 0;
    int maxCount = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            count++;
            maxCount=max(count,maxCount);
        }
        else if(s[i]==')')
            count--;
    }
    return count;
}


int main()
{
    

    return 0;
}