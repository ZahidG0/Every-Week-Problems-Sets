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
    string p, s;
cin >> p >> s;

int fast = 0;
int slow = 0;

bool isOkk = true;

while (slow < p.size() && fast < s.size())
{
    if (p[slow] != s[fast])
    {
        isOkk = false;
        break;
    }

    char ch = p[slow];

    int cnt_p = 0;
    int cnt_s = 0;

    while (slow < p.size() && p[slow] == ch)
    {
        cnt_p++;
        slow++;
    }

    while (fast < s.size() && s[fast] == ch)
    {
        cnt_s++;
        fast++;
    }

    if (cnt_s < cnt_p || cnt_s > 2 * cnt_p)
    {
        isOkk = false;
        break;
    }
}

if (slow != p.size() || fast != s.size())
{
    isOkk = false;
}

if (isOkk)
{
    yes;
}
else
{
    no;
}
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