#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string txt, pat;
    cin >> txt >> pat;

    int n = txt.size();
    int m = pat.size();

    if (m > n)
    {
        cout << -1 << "\n";
    }

    vector<int> pat_cnt(26, 0);
    vector<int> window_cnt(26, 0);

    int ans = 0;

    for(int i = 0; i < m; i++)
    {
        pat_cnt[pat[i]-'a']++;
        window_cnt[txt[i] - 'a']++;
    }

    if(pat_cnt == window_cnt) ans++;

    for (int i = m; i < n; i++)
    {
        window_cnt[txt[i-m] - 'a']--;
        window_cnt[txt[i] - 'a']++;

        if (pat_cnt == window_cnt)
        {
            ans++;
        }
        
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