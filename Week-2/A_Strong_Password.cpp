/* #include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            if (s[i] == s[i + 1])
            {
                char ch = (s[i] == 'a') ? 'b' : 'a';

                s.insert(s.begin() + i + 1, ch);

                cout << s << '\n';
                return;
            }
        }
    }

    char ch = (s[0] == 'a') ? 'b' : 'a';

    cout << ch << s << '\n';
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


 */

/* Another Best apporach  */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    bool done = false;

    for (int i = 0; i < s.size() - 1; i++)
    {
        cout << s[i];

        if (!done && s[i] == s[i + 1])
        {
            cout << (s[i] == 'a' ? 'b' : 'a');
            done = true;
        }
    }

    cout << s.back();

    if (!done)
        cout << (s.back() == 'a' ? 'b' : 'a');

    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();
}