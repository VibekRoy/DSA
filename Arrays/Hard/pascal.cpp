#include <bits/stdc++.h>
using namespace std;

int number_at_index_rc(int n, int r)
{
    long long ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans = ans*(n-i);
        ans = ans/(i+1);
    }
    return ans;
}

void print_r_row(int r)
{
    int ans = 1;
    cout << ans << " ";
    for (int i = 1; i < r; i++)
    {
        ans *= (r - i);
        ans /= (i + 1);
        cout << ans << " ";
    }
}

int main()
{

    int n, r, c;
    cin >> r >> c;

    // variation - 1
    cout << number_at_index_rc(r-1, c-1)<<endl;

    // variation - 2
    print_r_row(r);

    return 0;
}
