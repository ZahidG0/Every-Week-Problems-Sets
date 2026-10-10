#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    vector<int> ans(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    set<int> st;

    for (int i = n; i >= 1; i--)
    {
        st.insert(a[i]);
        ans[i] = st.size();
    }

    while (m--)
    {
        int l;
        cin >> l;

        cout << ans[l] << '\n';
    }

    return 0;
}