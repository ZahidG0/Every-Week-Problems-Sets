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
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    vector<ll> pref_sum(n);

    pref_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + arr[i];
    }

    map<ll, ll> prev_sum_pref;
    prev_sum_pref[0] = -1;

    ll max_val = 0;

    for (int i = 0; i < n; i++)
    {
        if (prev_sum_pref.find(pref_sum[i] - k) != prev_sum_pref.end())
        {
            max_val = max(max_val, i - prev_sum_pref[pref_sum[i] - k]);
        }

        if (prev_sum_pref.find(pref_sum[i]) == prev_sum_pref.end())
        {
            prev_sum_pref[pref_sum[i]] = i;
        }
    }

    cout << max_val << nl;
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}