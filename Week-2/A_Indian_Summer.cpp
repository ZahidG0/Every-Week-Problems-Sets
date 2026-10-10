#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    set<pair<string, string>> leaves_col;

    for (int i = 0; i < n; i++)
    {
        string species, color;
        cin >> species >> color;

        leaves_col.insert({species, color});
    }

    cout << leaves_col.size() << "\n";

    return 0;
}