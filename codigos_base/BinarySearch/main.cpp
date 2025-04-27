#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr, int target){
    int n = arr.size();
    int a = 0, b = n-1, res;

    while(a <= b){
        int mid = (a+b)/2;
        if(arr[mid] == target) res = mid;
        if(arr[mid] > target) b = mid-1;
        else a = mid+1;
    }
    return res;
}

int binarySearch2(vector<int> arr, int target){
    int n = arr.size();
    int mid = 0, res;

    for(int b = n/2; b>= 1; b/=2){
        while(mid+b < n && arr[mid+b] <= target) mid += b;
    }
    if(arr[mid] == target) res = mid;
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;

    int res = binarySearch(arr, target);
    cout<<res<<"\n";

    int res2 = binarySearch2(arr, target);
    cout<<res2<<"\n";
    return 0;
}
