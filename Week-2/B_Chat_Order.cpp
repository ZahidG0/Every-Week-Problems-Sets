#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<string> chatlist;
    unordered_set<string> seen;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        chatlist.push(s);
    }

    while (!chatlist.empty())
    {
        string curr = chatlist.top();
        chatlist.pop();

        if (seen.find(curr) == seen.end())
        {
            seen.insert(curr);
            cout << curr << "\n";
        }
    }

    return 0;
}