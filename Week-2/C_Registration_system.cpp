#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;

    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (mp.count(s))
        {
            mp[s]++;
            string new_str = s + to_string(mp[s]);
            mp[new_str] = 0;
            cout << new_str << "\n";
        }
        else
        {
            mp[s] = 0;
            cout << "OK" << "\n";
        }
    }

    return 0;
}