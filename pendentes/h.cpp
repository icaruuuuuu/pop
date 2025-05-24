#include <bits/stdc++.h>
using namespace std;
typedef vector<long long> vi;
typedef vector<vi> vii;
vi b;

bool vbin () {
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != b[b.size()-i-1]) {return 0;}
    }
    return 1;
}

void bin (long long x) {
    if (x == 0) {return;}
    b.emplace_back(x%2);
    bin(x/2);
}

void solve() {
    long long x; cin >> x;
    bin(x);
    if (vbin()) {cout << x << endl; return;}
    // for (auto a : b) {cout << a << ' ';} cout << endl;
    
    bool u = 0;
    for (int i = 0; i < b.size()/2; i++) {
        // cout << b[i] << ' ' << b[b.size()-i-1] << endl;
        if (b[i] != b[b.size()-i-1]) {u = 1;}
        if (b[i] && u) {
            for (int j = 0; j < i; j++) {b[j] = 2;}
            b[i] = 0;
            if (b[i] == b[b.size()-i-1]) {u = 0;}
        }
    }

    for (int i = (int) b.size()/2; i < b.size(); i++) {
        // cout << b[i] << ' ' << b[b.size()-i-1] << endl;
        if (i == b.size()-i-1 && b[i] == 1) {
            for (int j = 0; j < i; j++) {b[j] = 2;}
            b[i] = 0;
        }
        if (b[i]) {
            if (b[b.size()-i-1] != 2 && b[i] != b[b.size()-i-1]) {
                for (int j = 0; j < i; j++) {b[j] = 2;}
                b[i] = 0;
            }
        }
    }
    int s = (int) b.size();
    if (b[s-1] == 0) {s--;}

    
    for (int i = 0; i < s; i++) {
        if (b[s-i-1] == 2) {b[s-i-1] = 1;}
        if (b[i] == 2) {b[i] = b[s-i-1];}
    }
    
    // for (auto a : b) {cout << a << ' ';} cout << endl;
    // cout << vbin() << endl;
    
    long long c = 0;
    for (int i = 0; i < s; i++) {
        if (b[i]) {c += (long long) pow(2, i);}
    }
    cout << c << endl;
    b.clear();

}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    solve();
    // int t; cin >> t; while(t--) {solve();}

    return 0;
}   