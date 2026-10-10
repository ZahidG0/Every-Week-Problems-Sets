#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    int m;
    cin >> m;
    while (m--)
    {
        string s;
        cin >> s;

        if (s.length() != n)
        {
            cout << "NO\n";
            continue;
        }

        map<char, int> str_mp;
        map<int, char> num_mp;
        bool isOk = true;
        for (int i = 0; i < n; i++)
        {
            if (num_mp.count(arr[i]) && num_mp[arr[i]] != s[i])
            {
                isOk = false;
                break;
            }

            if (str_mp.count(s[i]) && str_mp[s[i]] != arr[i])
            {
                isOk = false;
                break;
            }

            num_mp[arr[i]] = s[i];
            str_mp[s[i]] = arr[i];
        }

        if (isOk)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
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