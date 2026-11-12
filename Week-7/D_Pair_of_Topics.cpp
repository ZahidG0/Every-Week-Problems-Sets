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
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);

    for (auto &x : a)
    {
        cin >> x;
    }
    for (auto &x : b)
    {
        cin >> x;
    }

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }

    pbds<pair<ll, int>> p;

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll x = -c[i];

        ll cnt = p.size() - p.order_of_key({x, INT_MAX});

        ans += cnt;

        p.insert({c[i], i});
    }

    cout << ans << nl;
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}