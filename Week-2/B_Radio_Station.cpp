#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<string, string> server;

    for (int i = 0; i < n; i++)
    {
        string name, ip;

        cin >> name >> ip;

        server[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string cmd, ip;
        cin >> cmd >> ip;

        string cleanIp = ip.substr(0, ip.length() - 1);
        cout << cmd << " " << ip << " " << "#" << server[cleanIp] << "\n";
    }

    return 0;
}