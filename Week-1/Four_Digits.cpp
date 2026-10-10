#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (s.size() < 4)
    {
        int mising = 4 - s.size();

        for (int i = 0; i < mising; i++)
        {
            cout << 0;
        }
    }
    cout << s << endl;

    return 0;
}