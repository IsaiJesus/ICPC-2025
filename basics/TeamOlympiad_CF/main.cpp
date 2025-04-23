// https://codeforces.com/problemset/problem/490/A
#include <bits/stdc++.h>

using namespace std;

void teamOlympiad(int n, vector<int> arr){
    vector<int> one;
    vector<int> two;
    vector<int> three;
    size_t minV;

    for(int i=0; i<n; i++){
        if(arr[i] == 1) one.push_back(i+1);
        if (arr[i] == 2) two.push_back(i+1);
        if (arr[i] == 3) three.push_back(i+1);
    }

    minV = min(min(one.size(), two.size()), three.size());

    if(minV == 0)
        cout<<0<<"\n";
    else{
        cout<<minV<<"\n";
        for(int i=0; i<(minV); i++){
            cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<"\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    teamOlympiad(n, arr);

    return 0;
}
