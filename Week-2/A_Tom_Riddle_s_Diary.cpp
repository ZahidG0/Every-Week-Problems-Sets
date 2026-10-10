#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;

    vector<string> str;
    for (size_t i = 0; i < n; i++)
    {
        cin >> s;

        if (find(str.begin(), str.end(), s) == str.end())
        {
            cout << "NO\n";
            str.push_back(s);
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}