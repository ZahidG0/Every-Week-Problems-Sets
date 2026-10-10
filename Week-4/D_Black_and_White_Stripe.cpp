#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int countW = 0;
    int ans;

    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
        {
            countW++;
        }
    }

    ans = countW;

    for (int i = k; i < n; i++)
    {
        if (s[i] == 'W')
        {
            countW++;
        }
        if (s[i - k] == 'W')
        {
            countW--;
        }

        ans = min(ans, countW);
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}