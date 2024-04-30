#include<bits/stdc++.h>
using namespace std;

int minimumPatching(vector<int>& nums, int n) {
    long long int sum = 0, cnt = 0, i = 0;
    while(sum < n){
        if(i<nums.size() && nums[i]<=sum+1){
            sum += nums[i++];
        }
        else{
            cnt++;
            sum += sum+1;
        }
    }
    return cnt;
}

int main(){
    vector<int> nums1 = {1, 2, 7, 8};
    int n1 = 25;
    
    vector<int> nums2 = {1, 3, 6, 9, 10};
    int n2 = 45;

    int res1 = minimumPatching(nums1, n1);
    int res2 = minimumPatching(nums2, n2);

    cout<<res1<<endl;
    cout<<res2<<endl;
    return 0;
}