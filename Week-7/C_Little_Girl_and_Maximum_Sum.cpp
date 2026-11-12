/* Author: Md. Zahid Hasan (GuRu) */

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
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    vector<int> diff(n + 1);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        l--, r--;

        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {
        diff[i] = diff[i - 1] + diff[i];
    }

    sort(rall(diff));
    sort(rall(arr));

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += (1ll * arr[i] * diff[i]);
    }

    cout << ans << nl;
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}