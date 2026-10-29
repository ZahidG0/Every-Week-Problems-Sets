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

    vector<ll> divisor;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.pb(i);

            if ((n / i) != i)
            {
                divisor.pb(n / i);
            }
        }
    }

    sort(all(divisor));

    if (divisor.size() < k)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << divisor[k - 1] << nl;
    }
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}