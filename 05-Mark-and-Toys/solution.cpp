#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;

    cin >> n >> k;

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int count = 0;
    long long total = 0;

    for (int i = 0; i < n; i++) {
        if (total + prices[i] <= k) {
            total += prices[i];
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}