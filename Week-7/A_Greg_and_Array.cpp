/* Author: Md. Zahid Hasan (GuRu) */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>,
                  rb_tree_tag, tree_order_statistics_node_update>;

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
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> l(m + 1), r(m + 1), d(m + 1);

    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }


    vector<ll> q_diff(m + 2, 0);

    for (int i = 1; i <= k; i++)
    {
        ll x, y;
        cin >> x >> y;

        q_diff[x]++;
        q_diff[y + 1]--;
    }

    for (int i = 1; i <= m; i++)
    {
        q_diff[i] += q_diff[i - 1];
    }


    vector<ll> arr_diff(n + 2, 0);

    for (int i = 1; i <= m; i++)
    {
        ll val = d[i] * q_diff[i];

        arr_diff[l[i]] += val;
        arr_diff[r[i] + 1] -= val;
    }


    for (int i = 1; i <= n; i++)
    {
        arr_diff[i] += arr_diff[i - 1];

        arr[i] += arr_diff[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << nl;
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}