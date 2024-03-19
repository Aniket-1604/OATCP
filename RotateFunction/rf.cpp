#include<bits/stdc++.h>
using namespace std;
 
int solve(int arr[], int n){
    int sum = 0, curr=0;
    for (int i=0; i<n; i++){
        sum += arr[i];
        curr += i*arr[i];
    }
    int maxProd = curr;
    for (int i=1; i<n; i++){
        int next = curr - (sum - arr[i-1]) + arr[i-1] * (n-1);
        curr = next;
        maxProd = max(maxProd, next);
    }
    return maxProd;
}
 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = solve(arr, n);
    cout << ans;

    return 0;
}