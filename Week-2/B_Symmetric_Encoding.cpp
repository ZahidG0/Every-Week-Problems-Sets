#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    string b;
    cin >> b;

    set<char> uniq_char(b.begin(), b.end());
    string r(uniq_char.begin(), uniq_char.end());

    map<char, char> decod_str;
    int len = r.length();

    for (int i = 0; i < len; i++)
    {
        decod_str[r[i]] = r[len - 1 - i];
    }

    string s = "";
    for (char ch : b)
    {
        s += decod_str[ch];
    }

    cout << s << "\n";
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