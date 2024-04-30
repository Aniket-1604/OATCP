#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    return a + b > b + a; 
}

string largestNumber(vector<int>& nums) {
    vector<string> nums_str;
    
    for (int num : nums) {
        nums_str.push_back(to_string(num));
    }
    
    sort(nums_str.begin(), nums_str.end(), compare);
    
    if (nums_str[0] == "0") return "0";
    
    string result = "";
    for (string num_str : nums_str) {
        result += num_str;
    }
    
    return result;
}

int main() {
    vector<int> nums1 = {12, 23, 13 ,45 ,8, 92};
    cout << largestNumber(nums1) << endl;  
    
    vector<int> nums2 = {18, 27, 93, 86 ,43 ,98, 101 ,202};
    cout << largestNumber(nums2) << endl;  
    
    return 0;
}
