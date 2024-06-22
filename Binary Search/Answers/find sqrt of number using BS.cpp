#include <bits/stdc++.h>
using namespace std;

long long int sqrtx(long long int x)
{
    long long int low = 1;
    long long int high = x;
    while (low <= high)
    {
        long long int mid = low + (high - low) / 2;

        if (mid * mid <= x)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return high;
}

int main()
{
    cout << sqrtx(36);

    return 0;
}