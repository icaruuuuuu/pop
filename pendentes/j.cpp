#include <bits/stdc++.h>
using namespace std;
#define long long ll
typedef vector<int> vi;
typedef vector<vi> vii;

void solve() {
    int n, k, j; cin >> n >> k;
    int arr[n]; for (auto& a : arr) {cin >> a;}

    for (int i = 0; i < n; i++) {
        int ai = arr[i];
        for (j = i; ai <= arr[j]; j=(j+1)%n) {ai += k;}
        cout << j+1 << ' ';
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    solve();
    // int t; cin >> t; while(t--) {solve();}

    return 0;
}