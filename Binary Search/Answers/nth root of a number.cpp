#include <bits/stdc++.h>
using namespace std;

int func(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

int NthRoot(int n, int m)
{
    int low = 1;
    int high = m;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int midN = func(mid,n,m);
        long long int val = pow(mid, n);
        if (midN == 1)
            return mid;
        if (midN ==2)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{

    return 0;
}