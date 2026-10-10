#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    map<char, ll> first_ch;
    map<char, ll> second_ch;
    map<string, ll> full_s;

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        ans += first_ch[s[0]];

        ans += second_ch[s[1]];

        ans -= 2 * full_s[s];

        first_ch[s[0]]++;
        second_ch[s[1]]++;
        full_s[s]++;
    }

    cout << ans << '\n';
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