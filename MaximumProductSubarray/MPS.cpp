#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n){
    int res = INT_MIN;
    int prod = 1;

    for (int i = 0; i < n; i++){
        prod *= arr[i];
        res = max(prod, res);
        if (prod == 0){
            prod = 1;
        }
    }

    prod = 1;

    for (int i = n-1; i >= 0; i--){
        prod *= arr[i];
        res = max(res, prod);
        if (prod == 0){
            prod = 1;
        }
    }

    return res;
}

int main(){
    int n;
    cin >> n;
    if(n==0){
        cout << 0 << "\n";
    }
    else{
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = solve(arr, n);
        cout << ans;
    }
    return 0;
}
