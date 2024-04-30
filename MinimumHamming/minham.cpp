#include <bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
    int xorResult = x ^ y;
    int distance = 0;
    while (xorResult > 0) {
        distance += xorResult & 1; 
        xorResult >>= 1; 
    }
    return distance;
}

int totalHammingDistance(vector<int>& nums) {
    int totalDistance = 0;
    int n = nums.size();
    
    for (int i = 0; i < 32; ++i) { 
        int countOnes = 0;
        for (int num : nums) {
            countOnes += (num >> i) & 1; 
        }
        totalDistance += countOnes * (n - countOnes); 
    }
    return totalDistance;
}

int main() {
    
    vector<int> nums1 = {8 ,5 ,13 ,27 ,25};
    cout << totalHammingDistance(nums1) << "\n"; 

    vector<int> nums2 = {19, 31, 6, 14, 18, 23, 23, 6};
    cout << totalHammingDistance(nums2) << "\n"; 

    return 0;
}
