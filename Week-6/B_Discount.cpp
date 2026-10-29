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
    vector<ll> vouch(k);

    ll ans = 0;

    for (auto &x : arr)
    {
        cin >> x;
        ans += x;
    }

    for (auto &x : vouch)
    {
        cin >> x;
    }

    sort(rall(arr));
    sort(all(vouch));

    ll slow = 0, fast = 0;

    while (fast < k)

    {
        if (slow + vouch[fast] > n)
            break;

        slow += vouch[fast] - 1;
        ans -= arr[slow];
        slow++;
        fast++;
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