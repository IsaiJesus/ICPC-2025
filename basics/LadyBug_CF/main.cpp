//https://codeforces.com/problemset/problem/2092/B

// La clave de la lógica para este código está en encontrar el patrón de que
// los números sólo se pueden intercambiar en forma de zig-zag, por lo que se debe de satisfacer la cantidad de
// 0s necesarios para hacer intercambios. Además, la razón de que cnt1 deba ser (n+1)/2 es porque cuando
// n es impar, hay más posiciones pares que impares.

#include <bits/stdc++.h>

using namespace std;

void ladyBug() {
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i) {
        if (i & 1) {
            cnt2 += a[i] == '0';
            cnt1 += b[i] == '0';
        } else {
            cnt1 += a[i] == '0';
            cnt2 += b[i] == '0';
        }
    }
    cout << (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2 ? "Yes" : "No") << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while (t--) ladyBug();
}
