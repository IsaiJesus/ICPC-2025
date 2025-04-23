#include <bits/stdc++.h>

using namespace std;

void oddOneOut(){
    int a, b, c; cin>>a>>b>>c;
    cout<<((a != b && a != c) ? a : (b != a && b != c) ? b : c)<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--) oddOneOut();

    return 0;
}
