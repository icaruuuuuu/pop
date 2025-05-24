#include <bits/stdc++.h>
using namespace std;
#define long long ll
typedef vector<int> vi;
typedef vector<vi> vii;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    
    int ai = 2*b-c;
    int bi = (a+c)/2;
    int ci = 2*b-a;

    // cout << ai << endl << bi << endl << ci << endl;
    
    if (!(ai % a)) {
        if (ai/a > 0) {cout << "YES" << endl; return;}
    }
    
    if (!(ci % c)) {
        if (ci/c > 0) {cout << "YES" << endl; return;}
    }

    // corner super específico
    if ((a+c) % 2) {cout << "NO" << endl; return;}
    if (!(bi % b)) {
        if (bi/b > 0) {cout << "YES" << endl; return;}
    }
    
    cout << "NO" << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    // solve();
    int t; cin >> t; while(t--) {solve();}

    return 0;
}