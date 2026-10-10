#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    string s;
    cin >> s;

    vector<ll> pref_sum(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + arr[i];
    }

    int l = 0;
    int r = n - 1;

    ll ans = 0;

    while (l < r)
    {
        while (l < r && s[l] != 'L')
        {
            l++;
        }

        while (l < r && s[r] != 'R')
        {
            r--;
        }

        if (l < r)
        {
            ans += pref_sum[r + 1] - pref_sum[l];

            l++;
            r--;
        }
    }

    cout << ans << "\n";
}

int main()
{
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