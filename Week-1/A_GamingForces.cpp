#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    int one_cnt = 0;
    int others_cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 1)
        {
            one_cnt++;
        }
        else
        {
            others_cnt++;
        }
    }

    cout << ((one_cnt + 1) / 2) + others_cnt << endl;
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