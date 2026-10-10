#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long total_sum = 0;
    long long min_odd = 2e9 + 7; 

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        total_sum += x;

        if (x % 2 != 0) {
            min_odd = min(min_odd, x);
        }
    }

    if (total_sum % 2 != 0) {
        total_sum -= min_odd;
    }

    cout << total_sum << "\n";

    return 0;
}