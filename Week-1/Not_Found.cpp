#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    /* vector<bool> vis(26,false);

    for(char c:s)
    {
        vis[c-'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!vis[i])
        {
            cout << (char)(i+'a') << endl;
            return 0;
        }

    } */

    sort(s.begin(), s.end());

    char mising = 'a';

    for (int i = 0; i < s.size(); i++)
    {
        if (mising == s[i])
        {
            mising++;
        }
    }

    if (mising > 'z')
    {
        cout << "None\n";
    }
    else
    {
        cout << mising << endl;
    }

    return 0;
}