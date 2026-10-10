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
    int n;
    cin >> n;

    vector<ll> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    string s;
    cin >> s;

    vector<ll> pref_sum(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + arr[i];
    }

    int left = 0;
    int right = n - 1;
    ll ans = 0;

    while (left < right)
    {
        while (left < right && s[left] != 'L')
        {
            left++;
        }
        while (left < right && s[right] != 'R')
        {
            right--;
        }

        if (left < right)
        {
            ans += pref_sum[right + 1] - pref_sum[left];
            left++;
            right--;
        }
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