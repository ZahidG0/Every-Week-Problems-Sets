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

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    vector<int> h(n);

    for (auto &x : arr)
    {
        cin >> x;
    }
    for (auto &x : h)
    {
        cin >> x;
    }

    int slow = 0, fast = 0, ans = 0;
    ll sum = 0;

    while (fast < n)
    {
        if (fast > 0 && h[fast - 1] % h[fast] == 0)
        {
            sum += arr[fast];
        }
        else
        {
            slow = fast;
            sum = arr[fast];
        }

        while (sum > k)
        {
            sum -= arr[slow];
            slow++;
        }

        ans = max(ans, fast - slow + 1);

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