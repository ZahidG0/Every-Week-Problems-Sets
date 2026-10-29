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

    vector<ll> arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    ll G1 = 0, G2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            G1 = __gcd(G1, arr[i]);
        else
            G2 = __gcd(G2, arr[i]);
    }

    bool ok1 = true, ok2 = true;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && arr[i] % G2 == 0)
            ok2 = false;

        if (i % 2 == 1 && arr[i] % G1 == 0)
            ok1 = false;
    }

    if (ok1)
        cout << G1 << nl;
    else if (ok2)
        cout << G2 << nl;
    else
        cout << 0 << nl;
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