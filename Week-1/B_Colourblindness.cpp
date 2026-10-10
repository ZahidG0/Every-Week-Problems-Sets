#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    char arr[2][n];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'G')
            {
                arr[i][j] = 'B';
            }
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[i + 1][j])
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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