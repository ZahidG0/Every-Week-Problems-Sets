/* #include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (mp[a[i]] == 1)
        {
            cout << i << "\n";
        }
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
} */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 2e6 + 5;

pair <int, int> a[sz];
#define x first
#define y second

void solve() {
   int n;
   scanf("%d", &n);
   for (int i = 0; i < n; i++) scanf("%d", &a[i].x), a[i].y = i + 1;
   sort(a, a + n);
   if (a[0].x == a[1].x) printf("%d\n", a[n - 1].y);
   else printf("%d\n", a[0].y);
}

int main() {
   int t;
   cin >> t;
   while (t--) solve();
}