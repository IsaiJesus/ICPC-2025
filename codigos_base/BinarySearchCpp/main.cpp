#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = {1, 2, 4, 4, 4, 5, 7};

    int value = 4;

    auto lb = lower_bound(v.begin(), v.end(), value);
    auto ub = upper_bound(v.begin(), v.end(), value);
    auto eq = equal_range(v.begin(), v.end(), value);

    cout << "lower_bound: Indice " << (lb - v.begin()) << ", valor " << *lb << '\n';
    cout << "upper_bound: Indice " << (ub - v.begin()) << ", valor " << *ub << '\n';

    cout << "equal_range: Indices ["
         << (eq.first - v.begin()) << ", "
         << (eq.second - v.begin()) << "), valores: ";

    for (auto it = eq.first; it != eq.second; ++it)
        cout << *it << ' ';

    cout << '\n';

    return 0;
}
