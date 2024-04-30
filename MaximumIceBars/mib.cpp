#include <bits/stdc++.h>
using namespace std;

int maxIceCream(int n, vector<int>&values, int coins){
    int ans=0;
    sort(values.begin(),values.end());
    for(int i=0; i<n; i++){
        if(values[i] <= coins){
            coins-=values[i];
            ans++;
        }
        else break;
    }
    return ans;
}

int main(){
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    int n, coins;
    vector<int> value;

    inputFile >> n;
    for (int i=0; i<n; i++){
        int val;
        inputFile >> val;
        value.push_back(val);
    }
    inputFile >> coins;

    int res = maxIceCream(n, value, coins);

    outputFile << res << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
