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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> cnt;

    int slow = 0, fast = 0;
    ll ans = 0;

    while (fast < n)
    {
        cnt[arr[fast]]++;

        while (cnt.size() > k)
        {
            cnt[arr[slow]]--;

            if (cnt[arr[slow]] == 0)
            {
                cnt.erase(arr[slow]);
            }

            slow++;
        }

        ans += fast - slow + 1;

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