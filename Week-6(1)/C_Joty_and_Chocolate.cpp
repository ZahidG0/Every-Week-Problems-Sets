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

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

void ZH_Solve()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll red = n / a;
    ll blue = n / b;
    ll both = n / LCM(a, b);

    ll ans = (red - both) * p + (blue - both) * q + both * max(p, q);

    cout << ans << nl;
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}