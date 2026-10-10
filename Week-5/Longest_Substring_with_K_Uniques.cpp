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
    string s;
    cin >> s;

    int k;
    cin >> k;

    map<char, int> cnt;

    int slow = 0, fast = 0, ans = 0;
    while (fast < s.size())
    {
        cnt[s[fast]]++;

        if (cnt.size() == k)
        {
            ans = max(ans, fast - slow + 1);
        }
        else
        {
            while (cnt.size() > k)
            {
                cnt[s[slow]]--;
                if (cnt[s[slow]] == 0)
                {
                    cnt.erase(s[slow]);
                }
                slow++;
            }
        }
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