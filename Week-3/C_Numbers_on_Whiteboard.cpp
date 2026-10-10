#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    priority_queue<int> pq;

    for (int i = 1; i <= n; i++)
    {
        pq.push(i);
    }

    cout << "2\n";
    for (int i = 0; i < n - 1; i++)
    {
        int first_max = pq.top();
        pq.pop();

        int second_max = pq.top();
        pq.pop();

        int new_num = (first_max + second_max + 1) / 2;

        cout << first_max << " " << second_max << "\n";

        pq.push(new_num);
    }
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