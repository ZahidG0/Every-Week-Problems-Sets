#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    stack<int> st_l;
    stack<int> st_u;

    vector<bool> keep(s.size(), true);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
        {
            keep[i] = false;
            if (!st_l.empty())
            {
                keep[st_l.top()] = false;
                st_l.pop();
            }
        }
        else if (s[i] == 'B')
        {
            keep[i] = false;
            if (!st_u.empty())
            {
                keep[st_u.top()] = false;
                st_u.pop();
            }
        }
        else
        {
            if (islower(s[i]))
            {
                st_l.push(i);
            }
            else
            {
                st_u.push(i);
            }
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (keep[i])
        {
            cout << s[i];
        }
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