#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
bool vis[100];

void DFS(int src)
{
    vis[src] = true;
    cout << src << " ";

    for (int x : adj[src])
    {
        if (!vis[x])
        {
            DFS(x);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    fill(begin(vis), end(vis), false);

    int src;
    cin >> src;

    if (src < 0 || src >= n)
    {
        cout << "Invalid source node. Must be between 0 and " << n - 1 << "." << endl;
        return 1;
    }

    DFS(src);
    cout << endl;

    return 0;
}
