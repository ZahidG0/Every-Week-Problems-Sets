#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int string_len;
        cin >> string_len;

        string s;
        cin >> s;

        for (int j = 0; j < string_len; j++)
        {
            if (s[j] == 'D')
            {
                arr[i]++;
                if (arr[i] == 10)
                {
                    arr[i] = 0;
                }
            }
            else if (s[j] == 'U')
            {
                arr[i]--;
                if (arr[i] == -1)
                {
                    arr[i] = 9;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
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