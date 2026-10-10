#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    map<ll, ll> freq;
    for (size_t i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        freq[x]++;
    }

    ll maxFreq = 0;

    for (auto [key, count] : freq)
    {
        maxFreq = max(maxFreq, count);
    }

    if (maxFreq > n - maxFreq)
    {

        cout << maxFreq - (n - maxFreq) << endl;
    }
    else
    {
        cout << n % 2 << endl;
    }
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