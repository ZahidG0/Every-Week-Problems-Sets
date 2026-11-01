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
    ll max_val = 0;

    for (auto &x : arr)
    {
        cin >> x;
        max_val = max(max_val, x);
    }

    ll z = 0;

    for (int i = 0; i < n; i++)
    {
        z = __gcd(z, (max_val - arr[i]));
    }

    ll y = 0;
    for (int i = 0; i < n; i++)
    {
        y += (max_val - arr[i]) / z;
    }

    cout << y << " " << z << nl;
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}