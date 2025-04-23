#include <bits/stdc++.h>

using namespace std;

void maximumSubarray(vector<int> array, int n){
    int best = 0, sum = 0;
    for(int k=0; k<n; k++){
        sum = max(array[k], sum+array[k]);
        best = max(best, sum);
    }
    cout<<best<<"\n";
}

int main() {
    int n;
    vector<int> array;

    cin>>n;
    array.resize(n);
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    maximumSubarray(array, n);

    return 0;
}
