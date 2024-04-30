#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
    stack<char> st;
    
    for (char digit : num) {
        while (k > 0 && !st.empty() && st.top() > digit) {
            st.pop();
            k--;
        }
        st.push(digit);
    }
    
    while (k > 0 && !st.empty()) {
        st.pop();
        k--;
    }
    
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    
    int i = 0;
    while (i < result.length() && result[i] == '0') {
        i++;
    }
    result = result.substr(i);
    
    if (result == "") {
        return "0";
    }
    return result;
}
int main() {
    cout << removeKdigits("653821",3) << endl; 
    cout << removeKdigits("2478905", 4) << endl;    
    return 0;
}
