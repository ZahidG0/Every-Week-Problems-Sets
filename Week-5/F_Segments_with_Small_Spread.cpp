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

/* void ZH_Solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    ll slow = 0, fast = 0, ans = 0;

    multiset<ll> diff_mp;

    while (fast < n)
    {
        diff_mp.insert(arr[fast]);

        ll mn = *diff_mp.begin();
        ll mx = *diff_mp.rbegin();

        if ((mx - mn) <= k)
        {
            ans += (fast - slow + 1);
        }
        else
        {
            while (mx - mn > k)
            {
                diff_mp.erase(diff_mp.find(arr[slow]));
                slow++;

                mn = *diff_mp.begin();
                mx = *diff_mp.rbegin();
            }

            ans += (fast - slow + 1);
        }

        fast++;
    }

    cout << ans << nl;
}
 */

void ZH_Solve()
{
    ll n, s;
    cin >> n >> s;

    vector<ll> arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    ll slow = 0, fast = 0, ans = 0;

    multiset<ll> diff_mp;

    while (fast < n)
    {
        diff_mp.insert(arr[fast]);

        while (*diff_mp.rbegin() - *diff_mp.begin() > s)
        {
            diff_mp.erase(diff_mp.find(arr[slow]));
            slow++;
        }

        ans += (fast - slow + 1);

        fast++;
    }

    cout << ans << nl;
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}