#include <bits/stdc++.h>

using namespace std;

void serejaDima(vector<int> arr, int n){
    int s = 0, d = 0, l = 0, r = n-1;
    for(int i=0; i<n; i++){
        if(arr[l] > arr[r]){
            if(i % 2 == 0) s += arr[l];
            else d += arr[l];
            l += 1;
        }else{
            if(i % 2 == 0) s += arr[r];
            else d += arr[r];
            r -= 1;
        }
    }
    cout<<s<<" "<<d<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    serejaDima(arr, n);

    return 0;
}
