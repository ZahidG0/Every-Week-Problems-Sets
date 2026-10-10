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
    ll n, s;
    cin >> n >> s;

    vector<int> arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    int fast = 0, slow = 0;
    ll sum = 0, ans = 0;

    while (fast < n)
    {
        sum += arr[fast];

        while (sum >= s)
        {
            sum -= arr[slow];
            slow++;
        }

        ans += slow;
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