#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<vector<string>> words(3, vector<string>(n));

    unordered_map<string, int> freq;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> words[i][j];
            freq[words[i][j]]++;
        }
    }

    vector<int> score(3, 0);
    for (int i = 0; i < 3; ++i)
    {
        for (const auto &word : words[i])
        {
            if (freq[word] == 1)
            {
                score[i] += 3;
            }
            else if (freq[word] == 2)
            {
                score[i] += 1;
            }
        }
    }

    cout << score[0] << " " << score[1] << " " << score[2] << "\n";
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