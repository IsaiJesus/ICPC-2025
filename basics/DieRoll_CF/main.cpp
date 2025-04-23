//https://codeforces.com/problemset/problem/9/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y, w, maxV;
    cin>>y>>w;
    maxV = max(y, w);
    //(7-maxV)/6
    switch(maxV){
        case 1: cout<<"1/1\n"; break;
        case 2: cout<<"5/6\n"; break;
        case 3: cout<<"2/3\n"; break;
        case 4: cout<<"1/2\n"; break;
        case 5: cout<<"1/3\n"; break;
        case 6: cout<<"1/6\n"; break;
        default: cout<<"0/1\n";
    }

    return 0;
}
