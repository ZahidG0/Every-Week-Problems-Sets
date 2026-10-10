#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int h, x, y;
    cin >> h >> x >> y;

    // Remaining health after using the special attack once
    int rem_health = h - y;

    // Number of normal attacks needed for the remaining health (ceiling division)
    int normal_att = (rem_health + x - 1) / x;

    // Total attacks = 1 (special attack) + normal_att
    cout << 1 + normal_att << "\n";
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}