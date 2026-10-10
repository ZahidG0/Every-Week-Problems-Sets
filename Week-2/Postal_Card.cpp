#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<string, bool> list_T;
    vector<string> list_S;

    string s;
    while (n--)
    {
        cin >> s;
        list_S.push_back(s);
    }
    while (m--)
    {
        cin >> s;
        list_T[s] = true;
    }

    int ans = 0;
    for (auto s : list_S)
    {
        string dig3 = s.substr(3, 3);
        if (list_T.count(dig3))
        {
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}