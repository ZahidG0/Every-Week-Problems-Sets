#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n), b(n), tm(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> tm[i];
    }

    ll curr_time = 0;

    for (int i = 0; i < n; i++)
    {
        ll prev_depar_time = (i == 0 ? 0 : b[i - 1]);

        curr_time += (a[i] - prev_depar_time) + tm[i];

        if (i == n - 1)
            break;

        ll stay = (b[i] - a[i] + 1) / 2;

        curr_time = max(curr_time + stay, b[i]);
    }

    cout << curr_time << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}