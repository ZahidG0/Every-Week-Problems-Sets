/* Author: Md. Zshid Hasan (GuRu) */

#include <bits/stdc++.h>
using namespace std;

#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define ll long long
#define ld long double

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define pb push_back
#define pf push_front
#define nl '\n'

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

/* ******* NEVER GIVE UP.
You'll reap the rewards of your hard work. ******* */

void ZH_Solve()
{

    ll n;
    cin >> n;

    vector<ll> arr(n), mons(n), pref(n + 1, 0);

    for (auto &x : arr)
    {
        cin >> x;
    }

    for (auto &x : mons)
    {
        cin >> x;
    }

    sort(all(arr));

    for (ll i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + mons[i - 1];
    }

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x = arr[i];
        ll avail_attack = n - i;

        ll level_mons = upper_bound(all(pref), avail_attack) - pref.begin() - 1;

        ans = max(ans, x * level_mons);
    }

    cout << ans << nl;
}

int main()
{
    Fast_IO;

    int tc;
    cin >> tc;

    while (tc--)
    {
        ZH_Solve();
    }

    return 0;
}