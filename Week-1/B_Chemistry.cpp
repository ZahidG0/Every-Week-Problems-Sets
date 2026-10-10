#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }

    int odd_count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 == 1)
        {
            odd_count++;
        }
    }

    if (odd_count - k <= 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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