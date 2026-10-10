#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<string, int> freq;
    int max_vot = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        freq[s]++;
        max_vot = max(max_vot, freq[s]);
    }

    for (auto [str, count] : freq)
    {
        if (count == max_vot)
        {
            cout << str << "\n";
        }
    }

    return 0;
}