#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    map<string, string> curr_handl;

    while (q--)
    {
        string old_handl, new_handl;
        cin >> old_handl >> new_handl;

        if (curr_handl.count(old_handl))
        {
            string original = curr_handl[old_handl];
            curr_handl.erase(old_handl);
            curr_handl[new_handl] = original;
        }
        else
        {
            curr_handl[new_handl] = old_handl;
        }
    }

    cout << curr_handl.size() << "\n";
    for (auto it : curr_handl)
    {
        cout << it.second << " " << it.first << "\n";
    }

    return 0;
}