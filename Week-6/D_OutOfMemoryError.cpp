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
    /* ll n, m, h;
    cin >> n >> m >> h;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<pair<ll, ll>> q(m);

    for (int i = 0; i < m; i++)
    {
        cin >> q[i].first >> q[i].second;
        q[i].first--;
    }

    ll last_indx = 0;

    for (int qi = 0; qi < m; qi++)
    {
        auto [i, x] = q[qi];

        arr[i] += x;

        if (arr[i] > h)
        {
            for (int k = qi; k >= last_indx; k--)
            {
                auto [i2, x2] = q[k];
                arr[i2] -= x2;
            }

            last_indx = qi + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << nl; */

    // ANOTHER CODE AND APPROACH AND ITS CALL (LAGY TECHNIQUE)

    ll n, m, h;
    cin >> n >> m >> h;

    vector<ll> arr(n + 1), add(n + 1, 0);
    vector<ll> seen(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    ll reset = 0;

    while (m--)
    {
        ll bi, c;
        cin >> bi >> c;

        ll cur = arr[bi];

        if (seen[bi] == reset)
        {
            cur += add[bi];
        }

        ll new_val = cur + c;

        if (new_val > h)
        {
            reset++;
        }
        else
        {
            add[bi] = new_val - arr[bi];
            seen[bi] = reset;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        ll ans = arr[i];

        if (seen[i] == reset)
        {
            ans += add[i];
        }

        cout << ans << " ";
    }
    cout << nl;
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