#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
#define V 100

bool bfs(int temp[V][V], int s, int t, int pfx[]) {
    bool vis[V];
    memset(vis, 0, sizeof(vis));
    queue<int> q;
    q.push(s);
    vis[s] = true;
    pfx[s] = -1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v = 0; v < V; v++) {
            if (vis[v] == false && temp[u][v] > 0) {
                if (v == t) {
                    pfx[v] = u;
                    return true;
                }
                q.push(v);
                pfx[v] = u;
                vis[v] = true;
            }
        }
    }
    return false;
}

int maximumFlow(int grid[V][V], int s, int t) {
    int u, v;
    int temp[V][V];
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
            temp[u][v] = grid[u][v];

    int pfx[V];
    int mx = 0;
    auto start = high_resolution_clock::now();
    while (bfs(temp, s, t, pfx)) {
        int pf = INT_MAX;
        for (v = t; v != s; v = pfx[v]) {
            u = pfx[v];
            pf = min(pf, temp[u][v]);
        }
        for (v = t; v != s; v = pfx[v]) {
            u = pfx[v];
            temp[u][v] -= pf;
            temp[v][u] += pf;
        }
        mx += pf;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by Ford-Fulkerson algorithm: " << duration.count() << "ms" << endl;
    return mx;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, src, dst;
    cin >> n;
    cin >> src >> dst;
    int grid[V][V] = {0}; 
    int n1, n2, wt;
    while (true) {
        cin >> n1;
        if (n1 == -1) break;
        cin >> n2 >> wt;
        grid[n1][n2] = wt; 
    }

    int res = maximumFlow(grid, src, dst);
    cout << "Max Flow: " << res << endl;

    fclose(stdin);
    fclose(stdout);

    return 0;
}