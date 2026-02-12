#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    int l = -1, r = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (l == -1) l = i;
            r = i;
        }
    }

    if (l == -1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if (a == b) {
        cout << "yes\n" << l + 1 << " " << r + 1 << "\n";
    } else {
        cout << "no\n";
    }

    return 0;
}
