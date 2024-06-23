#include <bits/stdc++.h>
using namespace std;

string largestOddNumber(string num)
{
    int n = num.size();
    for(int i=n-1;i>=0;i--)
    {
        int check = (int)num[i];
        if(check%2!=0)
            return num.substr(0,i+1);
    }
    return "";
}

int main()
{
    cout<<largestOddNumber("7542351161");

    return 0;
}